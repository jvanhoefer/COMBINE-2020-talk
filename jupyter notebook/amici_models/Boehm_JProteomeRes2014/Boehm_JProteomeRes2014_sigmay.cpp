#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "p.h"
#include "k.h"
#include "sigmay.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void sigmay_Boehm_JProteomeRes2014(realtype *sigmay, const realtype t, const realtype *p, const realtype *k){
    sigmapSTAT5A_rel = noiseParameter1_pSTAT5A_rel;  // sigmay[0]
    sigmapSTAT5B_rel = noiseParameter1_pSTAT5B_rel;  // sigmay[1]
    sigmarSTAT5A_rel = noiseParameter1_rSTAT5A_rel;  // sigmay[2]
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014