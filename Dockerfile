FROM docker.io/debian:bookworm-20231030 as debian-base
MAINTAINER Martin Heistermann <martin.heistermann@inf.unibe.ch>

FROM debian-base as base-packages

ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y --no-install-recommends \
    binutils \
    build-essential \
    ca-certificates \
    clang \
    cmake \
    curl \
    git \
    libc-dev \
    liblapack-dev \
    libopenblas64-serial-dev \
    libopenmpi-dev \
    libtool \
    locales \
    ninja-build \
    time \
    tzdata \
    wget \
    pkg-config \
    libgmp-dev \
    libomp-dev \
    gfortran \
    mingw-w64 \
    wine

RUN mkdir -p /usr/src/coin-or && \
    mkdir -p /opt/coin-or && \
    cd /usr/src/coin-or && \
    wget https://raw.githubusercontent.com/coin-or/coinbrew/master/coinbrew \
    && chmod +x coinbrew

RUN cd /usr/src/coin-or && ./coinbrew fetch https://github.com/coin-or-tools/ThirdParty-Mumps@3.0.5

RUN cd /usr/src/coin-or && ./coinbrew fetch Ipopt@3.14.13 --skip-update
RUN cd /usr/src/coin-or && ./coinbrew fetch Bonmin@master --skip-update

RUN cd /usr/src/coin-or && ./coinbrew build Ipopt@3.14.13 --verbosity 2 --skip-update --prefix=/opt/coin-or --parallel-jobs 8 --tests none 
RUN cd /usr/src/coin-or && ./coinbrew build Bonmin@master --verbosity 2 --skip-update --prefix=/opt/coin-or --parallel-jobs 8 --tests none 

RUN ln -s /opt/coin-or/include/coin-or /opt/coin-or/include/coin

FROM base-packages AS build

COPY . /app

ENV IPOPT_HOME=/opt/coin-or
ENV CBC_DIR=/opt/coin-or
ENV GMP_INCLUDE_DIR=/usr/include
ENV GMP_LIBRARIES=/usr/lib/x86_64-linux-gnu/libgmp.so

RUN mkdir /app/build
WORKDIR /app/build
RUN cmake -G Ninja \
    -D CMAKE_BUILD_TYPE=Release \
    -D CMAKE_C_COMPILER=x86_64-w64-mingw32-gcc \
    -D CMAKE_CXX_COMPILER=x86_64-w64-mingw32-g++ \
    -D CMAKE_CXX_FLAGS="-march=native" \
    -D BONMIN_ROOT_DIR=/opt/coin-or \
    -D GMP_INCLUDE_DIR=$GMP_INCLUDE_DIR \
    -D GMP_LIBRARIES=$GMP_LIBRARIES \
    .. > cmake_output.txt 2>&1 || (cat cmake_output.txt && false)

RUN ninja

RUN ln -s /app/build/Build/bin/* /usr/local/bin
