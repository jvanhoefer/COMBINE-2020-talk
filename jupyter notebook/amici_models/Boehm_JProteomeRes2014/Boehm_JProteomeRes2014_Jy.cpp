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

void Jy_Boehm_JProteomeRes2014(realtype *Jy, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigmapSTAT5A_rel, 2)) + 0.5*std::pow(-mpSTAT5A_rel + pSTAT5A_rel, 2)/std::pow(sigmapSTAT5A_rel, 2);
            break;
        case 1:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigmapSTAT5B_rel, 2)) + 0.5*std::pow(-mpSTAT5B_rel + pSTAT5B_rel, 2)/std::pow(sigmapSTAT5B_rel, 2);
            break;
        case 2:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigmarSTAT5A_rel, 2)) + 0.5*std::pow(-mrSTAT5A_rel + rSTAT5A_rel, 2)/std::pow(sigmarSTAT5A_rel, 2);
            break;
    }
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014