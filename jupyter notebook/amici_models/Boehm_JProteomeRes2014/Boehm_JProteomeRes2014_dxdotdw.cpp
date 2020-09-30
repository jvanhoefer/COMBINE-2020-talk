#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"
#include "dxdotdw.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void dxdotdw_Boehm_JProteomeRes2014(realtype *dxdotdw, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w){
    dxdot0_dflux_r0 = -1.4285714285714286;  // dxdotdw[0]
    dxdot3_dflux_r0 = 0.7142857142857143;  // dxdotdw[1]
    dxdot0_dflux_r1 = -0.7142857142857143;  // dxdotdw[2]
    dxdot1_dflux_r1 = -0.7142857142857143;  // dxdotdw[3]
    dxdot2_dflux_r1 = 0.7142857142857143;  // dxdotdw[4]
    dxdot1_dflux_r2 = -1.4285714285714286;  // dxdotdw[5]
    dxdot4_dflux_r2 = 0.7142857142857143;  // dxdotdw[6]
    dxdot3_dflux_r3 = -0.7142857142857143;  // dxdotdw[7]
    dxdot5_dflux_r3 = 2.2222222222222223;  // dxdotdw[8]
    dxdot2_dflux_r4 = -0.7142857142857143;  // dxdotdw[9]
    dxdot6_dflux_r4 = 2.2222222222222223;  // dxdotdw[10]
    dxdot4_dflux_r5 = -0.7142857142857143;  // dxdotdw[11]
    dxdot7_dflux_r5 = 2.2222222222222223;  // dxdotdw[12]
    dxdot0_dflux_r6 = 1.4285714285714286;  // dxdotdw[13]
    dxdot5_dflux_r6 = -2.2222222222222223;  // dxdotdw[14]
    dxdot0_dflux_r7 = 0.7142857142857143;  // dxdotdw[15]
    dxdot1_dflux_r7 = 0.7142857142857143;  // dxdotdw[16]
    dxdot6_dflux_r7 = -2.2222222222222223;  // dxdotdw[17]
    dxdot1_dflux_r8 = 1.4285714285714286;  // dxdotdw[18]
    dxdot7_dflux_r8 = -2.2222222222222223;  // dxdotdw[19]
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014