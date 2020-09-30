#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "tcl.h"
#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void w_Boehm_JProteomeRes2014(realtype *w, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *tcl){
    flux_r0 = 1.7499999999999999e-7*std::pow(STAT5A, 2)*k_phos*std::exp(-Epo_degradation_BaF3*t);  // w[0]
    flux_r1 = 1.7499999999999999e-7*STAT5A*STAT5B*k_phos*std::exp(-Epo_degradation_BaF3*t);  // w[1]
    flux_r2 = 1.7499999999999999e-7*std::pow(STAT5B, 2)*k_phos*std::exp(-Epo_degradation_BaF3*t);  // w[2]
    flux_r3 = 1.3999999999999999*k_imp_homo*pApA;  // w[3]
    flux_r4 = 1.3999999999999999*k_imp_hetero*pApB;  // w[4]
    flux_r5 = 1.3999999999999999*k_imp_homo*pBpB;  // w[5]
    flux_r6 = 0.45000000000000001*k_exp_homo*nucpApA;  // w[6]
    flux_r7 = 0.45000000000000001*k_exp_hetero*nucpApB;  // w[7]
    flux_r8 = 0.45000000000000001*k_exp_homo*nucpBpB;  // w[8]
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014