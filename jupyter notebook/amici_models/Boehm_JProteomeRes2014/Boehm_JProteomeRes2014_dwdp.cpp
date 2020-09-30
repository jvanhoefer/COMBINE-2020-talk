#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "tcl.h"
#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"
#include "dwdp.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void dwdp_Boehm_JProteomeRes2014(realtype *dwdp, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w, const realtype *tcl, const realtype *dtcldp){
    dflux_r0_dEpo_degradation_BaF3 = -1.7499999999999999e-7*std::pow(STAT5A, 2)*k_phos*t*std::exp(-Epo_degradation_BaF3*t);  // dwdp[0]
    dflux_r1_dEpo_degradation_BaF3 = -1.7499999999999999e-7*STAT5A*STAT5B*k_phos*t*std::exp(-Epo_degradation_BaF3*t);  // dwdp[1]
    dflux_r2_dEpo_degradation_BaF3 = -1.7499999999999999e-7*std::pow(STAT5B, 2)*k_phos*t*std::exp(-Epo_degradation_BaF3*t);  // dwdp[2]
    dflux_r7_dk_exp_hetero = 0.45000000000000001*nucpApB;  // dwdp[3]
    dflux_r6_dk_exp_homo = 0.45000000000000001*nucpApA;  // dwdp[4]
    dflux_r8_dk_exp_homo = 0.45000000000000001*nucpBpB;  // dwdp[5]
    dflux_r4_dk_imp_hetero = 1.3999999999999999*pApB;  // dwdp[6]
    dflux_r3_dk_imp_homo = 1.3999999999999999*pApA;  // dwdp[7]
    dflux_r5_dk_imp_homo = 1.3999999999999999*pBpB;  // dwdp[8]
    dflux_r0_dk_phos = 1.7499999999999999e-7*std::pow(STAT5A, 2)*std::exp(-Epo_degradation_BaF3*t);  // dwdp[9]
    dflux_r1_dk_phos = 1.7499999999999999e-7*STAT5A*STAT5B*std::exp(-Epo_degradation_BaF3*t);  // dwdp[10]
    dflux_r2_dk_phos = 1.7499999999999999e-7*std::pow(STAT5B, 2)*std::exp(-Epo_degradation_BaF3*t);  // dwdp[11]
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014