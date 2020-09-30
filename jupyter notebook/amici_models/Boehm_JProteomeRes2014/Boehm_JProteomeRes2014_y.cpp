#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void y_Boehm_JProteomeRes2014(realtype *y, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w){
    y[0] = (200*pApA*specC17 + 100*pApB)/(STAT5A*specC17 + 2*pApA*specC17 + pApB);
    y[1] = (-100*pApB + 200*pBpB*(specC17 - 1))/(STAT5B*(specC17 - 1) - pApB + 2*pBpB*(specC17 - 1));
    y[2] = (100*STAT5A*specC17 + 200*pApA*specC17 + 100*pApB)/(STAT5A*specC17 - STAT5B*(specC17 - 1) + 2*pApA*specC17 + 2*pApB - 2*pBpB*(specC17 - 1));
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014