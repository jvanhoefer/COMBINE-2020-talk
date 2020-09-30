#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "p.h"
#include "k.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void x0_Boehm_JProteomeRes2014(realtype *x0, const realtype t, const realtype *p, const realtype *k){
    x0[0] = 207.59999999999999*ratio;
    x0[1] = 207.59999999999999 - 207.59999999999999*ratio;
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014