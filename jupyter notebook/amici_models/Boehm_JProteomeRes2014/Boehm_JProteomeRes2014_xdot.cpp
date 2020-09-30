#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"
#include "xdot.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void xdot_Boehm_JProteomeRes2014(realtype *xdot, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w){
    xdot0 = -1.4285714285714286*flux_r0 - 0.7142857142857143*flux_r1 + 1.4285714285714286*flux_r6 + 0.7142857142857143*flux_r7;  // xdot[0]
    xdot1 = -0.7142857142857143*flux_r1 - 1.4285714285714286*flux_r2 + 0.7142857142857143*flux_r7 + 1.4285714285714286*flux_r8;  // xdot[1]
    xdot2 = 0.7142857142857143*flux_r1 - 0.7142857142857143*flux_r4;  // xdot[2]
    xdot3 = 0.7142857142857143*flux_r0 - 0.7142857142857143*flux_r3;  // xdot[3]
    xdot4 = 0.7142857142857143*flux_r2 - 0.7142857142857143*flux_r5;  // xdot[4]
    xdot5 = 2.2222222222222223*flux_r3 - 2.2222222222222223*flux_r6;  // xdot[5]
    xdot6 = 2.2222222222222223*flux_r4 - 2.2222222222222223*flux_r7;  // xdot[6]
    xdot7 = 2.2222222222222223*flux_r5 - 2.2222222222222223*flux_r8;  // xdot[7]
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014