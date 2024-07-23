/*===========================================================================*\
 *        AlgoHex Library --- https://github.com/cgg-bern/AlgoHex.git        *
 *         Copyright (C) 2019-2023 David Bommes, University of Bern          *
 *---------------------------------------------------------------------------*
 *  For license information see LICENSE.txt in the AlgoHex root directory.   *
 *  All contributors are stated in CREDITS.txt.                              *
\*===========================================================================*/

#include "SDPMatrices.hh"

// Warning: Auto-generated! See SDPMatrices.hh

namespace AlgoHex
{

const Eigen::Matrix<double, 16, 1> sdpB = (Eigen::Matrix<double, 16, 1>() <<
                                                                    1., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.).finished();


static const double sdpA_data[] = {0x1.0000000000000p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0,
                            0x1.e148d821bf212p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.3b131f45fda75p+6,
                            0x0.0p+0, 0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.01d4bced81d1cp+8, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.55140fa0e4341p+7, 0x0.0p+0, -0x1.01d4bced81d1cp+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.3b131f45fda75p+6, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.3565af8368954p+9, 0x0.0p+0, 0x1.cd38dd63b078fp+8, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.c3344a9fa32f0p+9,
                            0x0.0p+0, 0x1.55140fa0e4341p+7, 0x0.0p+0, 0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x1.cd38dd63b078fp+8, 0x0.0p+0, -0x1.01d4bced81d1cp+8, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.55140fa0e4341p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.f22d452206079p+5, 0x0.0p+0,
                            0x1.498354408e7d3p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, -0x1.6ca0cbb051bc9p+5, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.e25b8ec895341p+7, 0x0.0p+0,
                            -0x1.6ca0cbb051bc9p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.46221f958ffb0p+6, 0x0.0p+0,
                            0x1.439349ecbbc43p+8, 0x0.0p+0, 0x1.f22d452206079p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.46221f958ffb0p+6, 0x0.0p+0, -0x1.c7c8fe9c662bdp+7, 0x0.0p+0,
                            0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.c7c8fe9c662bcp+7, 0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x1.498354408e7d3p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.439349ecbbc43p+8, 0x0.0p+0,
                            -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.6043a3dc40ae5p+6, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.cd38dd63b078fp+8, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.82bf1b6442ba9p+8, 0x0.0p+0,
                            -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.cd38dd63b078fp+8,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.55140fa0e4341p+7, 0x0.0p+0, -0x1.82bf1b6442ba9p+8, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x1.498354408e7d3p+7, 0x0.0p+0, 0x1.f22d452206079p+5, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.498354408e7d3p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.439349ecbbc43p+8, 0x0.0p+0,
                            -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.c7c8fe9c662bcp+7, 0x0.0p+0, 0x1.e25b8ec895341p+6, 0x0.0p+0,
                            0x1.f22d452206079p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.46221f958ffb0p+6,
                            0x0.0p+0, 0x1.6ca0cbb051bc9p+5, 0x0.0p+0, -0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0,
                            0x1.439349ecbbc43p+8, 0x0.0p+0, -0x1.46221f958ffb0p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.e25b8ec895341p+7, 0x0.0p+0, -0x1.c7c8fe9c662bbp+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x1.6ca0cbb051bc9p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x1.498354408e7d3p+7, 0x0.0p+0, -0x1.f22d452206079p+5, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.498354408e7d3p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.439349ecbbc43p+8, 0x0.0p+0,
                            0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.6ca0cbb051bc9p+5, 0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0,
                            -0x1.f22d452206079p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.46221f958ffb0p+6,
                            0x0.0p+0, -0x1.c7c8fe9c662bcp+7, 0x0.0p+0, -0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0,
                            0x1.439349ecbbc43p+8, 0x0.0p+0, 0x1.46221f958ffb0p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.e25b8ec895341p+7, 0x0.0p+0, 0x1.6ca0cbb051bc9p+5,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.e25b8ec895341p+6, 0x0.0p+0, -0x1.c7c8fe9c662bcp+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.e148d821bf212p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.3b131f45fda75p+6,
                            0x0.0p+0, -0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.01d4bced81d1cp+8, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, -0x1.c3344a9fa32f0p+9,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.3b131f45fda75p+6, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.3565af8368954p+9, 0x0.0p+0, -0x1.cd38dd63b078fp+8, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.01d4bced81d1cp+7,
                            0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, -0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.cd38dd63b078fp+8, 0x0.0p+0, -0x1.01d4bced81d1cp+8, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.f22d452206079p+5, 0x0.0p+0,
                            -0x1.498354408e7d3p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, -0x1.c7c8fe9c662bcp+7, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.e25b8ec895341p+7, 0x0.0p+0,
                            -0x1.c7c8fe9c662bbp+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.46221f958ffb0p+6, 0x0.0p+0,
                            -0x1.439349ecbbc43p+8, 0x0.0p+0, 0x1.f22d452206079p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.46221f958ffb0p+6, 0x0.0p+0, -0x1.6ca0cbb051bc9p+5, 0x0.0p+0,
                            -0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.6ca0cbb051bc9p+5, 0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, -0x1.498354408e7d3p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.439349ecbbc43p+8, 0x0.0p+0,
                            -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.e148d821bf212p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.3b131f45fda75p+4,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.d20073530b059p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.c3344a9fa32f0p+7, 0x0.0p+0, 0x1.55140fa0e4341p+6, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.55140fa0e4341p+7, 0x0.0p+0,
                            -0x1.01d4bced81d1cp+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.55140fa0e4341p+6, 0x0.0p+0, -0x1.01d4bced81d1cp+5, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.3b131f45fda75p+4, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.68f6a2194f58dp+8, 0x0.0p+0, 0x1.b0654f8d75715p+8, 0x0.0p+0, -0x1.3111dbf56264ap+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.526737f7ba634p+9, 0x0.0p+0,
                            0x1.aa5913891d412p+8, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.b0654f8d75715p+8, 0x0.0p+0, -0x1.01d4bced81d1cp+9, 0x0.0p+0, 0x1.55140fa0e4341p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.aa5913891d411p+8, 0x0.0p+0,
                            -0x1.c3344a9fa32f0p+7, 0x0.0p+0, 0x1.d20073530b059p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.3111dbf56264ap+7, 0x0.0p+0, 0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.d20073530b059p+6, 0x0.0p+0, -0x1.6043a3dc40ae5p+5, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.d20073530b059p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.3111dbf56264ap+7, 0x0.0p+0, 0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.55140fa0e4341p+8, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.6043a3dc40ae5p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.9391c1b73a69cp+7, 0x0.0p+0, -0x1.82bf1b6442ba9p+7, 0x0.0p+0, -0x1.55140fa0e4341p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.01d4bced81d1cp+7, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.3111dbf56264ap+7, 0x0.0p+0, 0x1.9391c1b73a69cp+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.55140fa0e4341p+8, 0x0.0p+0, -0x1.01d4bced81d1cp+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.55140fa0e4341p+7, 0x0.0p+0, -0x1.82bf1b6442ba9p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.e148d821bf212p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.d89caee8fc7b1p+5,
                            0x0.0p+0, 0x1.6043a3dc40ae5p+6, 0x0.0p+0, -0x1.d20073530b059p+6, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.c3344a9fa32f0p+7, 0x0.0p+0, 0x1.55140fa0e4341p+6, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0,
                            -0x1.82bf1b6442ba9p+8, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.55140fa0e4341p+6, 0x0.0p+0, -0x1.01d4bced81d1cp+5, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.d89caee8fc7b1p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.9c8794af361c6p+5, 0x0.0p+0, 0x1.cd38dd63b078fp+4, 0x0.0p+0, 0x1.3111dbf56264ap+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.4249ec28e2463p+7, 0x0.0p+0,
                            -0x1.ff9e1771564e3p+7, 0x0.0p+0, 0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.cd38dd63b078fp+4, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.ff9e1771564e3p+7, 0x0.0p+0,
                            -0x1.c3344a9fa32f0p+7, 0x0.0p+0, -0x1.d20073530b059p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.3111dbf56264ap+7, 0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.d20073530b059p+6, 0x0.0p+0, -0x1.0832bae53082cp+7, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.d20073530b059p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.3111dbf56264ap+7, 0x0.0p+0, 0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.0832bae53082cp+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.036ffc8813440p+8, 0x0.0p+0, 0x1.82bf1b6442ba9p+7, 0x0.0p+0, -0x1.55140fa0e4341p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.01d4bced81d1cp+8, 0x0.0p+0,
                            -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x1.3111dbf56264ap+7, 0x0.0p+0,
                            -0x1.036ffc8813440p+8, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x1.01d4bced81d1cp+8, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.55140fa0e4341p+7, 0x0.0p+0,
                            0x1.82bf1b6442ba9p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.498354408e7d3p+6, 0x0.0p+0, 0x1.f22d452206079p+4, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x1.3f0cb23a47850p+8, 0x0.0p+0,
                            -0x1.498354408e7d3p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.439349ecbbc43p+7,
                            0x0.0p+0, 0x1.e25b8ec895341p+7, 0x0.0p+0, -0x1.3f0cb23a47850p+8, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.6ca0cbb051bcap+7, 0x0.0p+0,
                            -0x1.e25b8ec895341p+7, 0x0.0p+0, 0x1.f22d452206079p+4, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.e9332f6057f87p+5, 0x0.0p+0, -0x1.6ca0cbb051bc9p+6, 0x0.0p+0,
                            0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, -0x1.439349ecbbc43p+7, 0x0.0p+0,
                            0x1.e9332f6057f87p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x1.6ca0cbb051bcap+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.e25b8ec895341p+7, 0x0.0p+0,
                            -0x1.6ca0cbb051bc9p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.3f0cb23a47850p+8, 0x0.0p+0, -0x1.e25b8ec895341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.3f0cb23a47850p+8, 0x0.0p+0,
                            0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.89d7e7177d113p+6, 0x0.0p+0,
                            0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x1.d20073530b059p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.c3344a9fa32f0p+7, 0x0.0p+0, -0x1.ff9e1771564e4p+7, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0,
                            0x1.01d4bced81d1cp+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.ff9e1771564e3p+7, 0x0.0p+0, 0x1.c3344a9fa32f0p+7, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.89d7e7177d113p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.01d4bced81d1cp+8, 0x0.0p+0, 0x1.cd38dd63b078fp+4, 0x0.0p+0, -0x1.3111dbf56264ap+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.82bf1b6442ba9p+6, 0x0.0p+0,
                            0x1.55140fa0e4341p+6, 0x0.0p+0, 0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.cd38dd63b078fp+4, 0x0.0p+0, -0x1.01d4bced81d1cp+8, 0x0.0p+0,
                            -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.55140fa0e4341p+6, 0x0.0p+0, -0x1.c3344a9fa32f0p+7, 0x0.0p+0, 0x1.d20073530b059p+6,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.3111dbf56264ap+7, 0x0.0p+0,
                            -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.75a1f3d98485bp+6, 0x0.0p+0,
                            0x1.498354408e7d3p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.3f0cb23a47850p+8, 0x0.0p+0,
                            0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.3f0cb23a47850p+8, 0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0,
                            0x1.6ca0cbb051bc9p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.e25b8ec895341p+6, 0x0.0p+0, 0x1.6ca0cbb051bc9p+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.46221f958ffb0p+4, 0x0.0p+0, 0x1.439349ecbbc43p+7, 0x0.0p+0, -0x1.75a1f3d98485bp+6,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.46221f958ffb0p+4, 0x0.0p+0,
                            -0x1.6ca0cbb051bc9p+5, 0x0.0p+0, 0x1.e25b8ec895341p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.6ca0cbb051bc9p+5, 0x0.0p+0, -0x1.e25b8ec895341p+6,
                            0x0.0p+0, 0x1.498354408e7d3p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x1.439349ecbbc43p+7, 0x0.0p+0, -0x1.e25b8ec895341p+6, 0x0.0p+0, -0x1.3f0cb23a47850p+8,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.e25b8ec895341p+6, 0x0.0p+0,
                            -0x1.3f0cb23a47850p+8, 0x0.0p+0,
                            -0x1.e148d821bf212p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.3b131f45fda75p+6,
                            0x0.0p+0, 0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x1.c3344a9fa32f0p+9,
                            0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x1.c3344a9fa32f0p+7, 0x0.0p+0, -0x1.55140fa0e4341p+6, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.55140fa0e4341p+6, 0x0.0p+0, 0x1.01d4bced81d1cp+5, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, -0x1.3b131f45fda75p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            -0x1.9c8794af361c6p+4, 0x0.0p+0, 0x1.cd38dd63b078fp+4, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.82bf1b6442ba9p+6, 0x0.0p+0,
                            -0x1.55140fa0e4341p+6, 0x0.0p+0, 0x1.6043a3dc40ae5p+6, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, 0x1.cd38dd63b078fp+4, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+7,
                            0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, -0x1.55140fa0e4341p+6, 0x0.0p+0,
                            0x1.c3344a9fa32f0p+7, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0,
                            0x0.0p+0, -0x1.55140fa0e4341p+7, 0x0.0p+0, 0x1.c3344a9fa32f0p+9};


Eigen::Map<const Eigen::Matrix<double, 16, 100> > sdpA(sdpA_data);

} // namespace AlgoHex
