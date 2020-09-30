#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "y.h"
#include "my.h"
#include "p.h"
#include "k.h"
#include "sigmay.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void dJydsigmay_Boehm_JProteomeRes2014(realtype *dJydsigmay, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            dJydsigmay[0] = 1.0/sigmapSTAT5A_rel - 1.0*std::pow(-mpSTAT5A_rel + pSTAT5A_rel, 2)/std::pow(sigmapSTAT5A_rel, 3);
            break;
        case 1:
            dJydsigmay[1] = 1.0/sigmapSTAT5B_rel - 1.0*std::pow(-mpSTAT5B_rel + pSTAT5B_rel, 2)/std::pow(sigmapSTAT5B_rel, 3);
            break;
        case 2:
            dJydsigmay[2] = 1.0/sigmarSTAT5A_rel - 1.0*std::pow(-mrSTAT5A_rel + rSTAT5A_rel, 2)/std::pow(sigmarSTAT5A_rel, 3);
            break;
    }
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014