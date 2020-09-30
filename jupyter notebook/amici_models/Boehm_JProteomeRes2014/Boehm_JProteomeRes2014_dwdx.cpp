#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "tcl.h"
#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"
#include "dwdx.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void dwdx_Boehm_JProteomeRes2014(realtype *dwdx, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w, const realtype *tcl){
    dflux_r0_dSTAT5A = 3.4999999999999998e-7*STAT5A*k_phos*std::exp(-Epo_degradation_BaF3*t);  // dwdx[0]
    dflux_r1_dSTAT5A = 1.7499999999999999e-7*STAT5B*k_phos*std::exp(-Epo_degradation_BaF3*t);  // dwdx[1]
    dflux_r1_dSTAT5B = 1.7499999999999999e-7*STAT5A*k_phos*std::exp(-Epo_degradation_BaF3*t);  // dwdx[2]
    dflux_r2_dSTAT5B = 3.4999999999999998e-7*STAT5B*k_phos*std::exp(-Epo_degradation_BaF3*t);  // dwdx[3]
    dflux_r4_dpApB = 1.3999999999999999*k_imp_hetero;  // dwdx[4]
    dflux_r3_dpApA = 1.3999999999999999*k_imp_homo;  // dwdx[5]
    dflux_r5_dpBpB = 1.3999999999999999*k_imp_homo;  // dwdx[6]
    dflux_r6_dnucpApA = 0.45000000000000001*k_exp_homo;  // dwdx[7]
    dflux_r7_dnucpApB = 0.45000000000000001*k_exp_hetero;  // dwdx[8]
    dflux_r8_dnucpBpB = 0.45000000000000001*k_exp_homo;  // dwdx[9]
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014