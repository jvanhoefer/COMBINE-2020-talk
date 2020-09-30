#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "y.h"
#include "my.h"
#include "p.h"
#include "k.h"
#include "sigmay.h"
#include "dJydy.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void dJydy_Boehm_JProteomeRes2014(realtype *dJydy, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            dJydy[0] = (-1.0*mpSTAT5A_rel + 1.0*pSTAT5A_rel)/std::pow(sigmapSTAT5A_rel, 2);
            break;
        case 1:
            dJydy[0] = (-1.0*mpSTAT5B_rel + 1.0*pSTAT5B_rel)/std::pow(sigmapSTAT5B_rel, 2);
            break;
        case 2:
            dJydy[0] = (-1.0*mrSTAT5A_rel + 1.0*rSTAT5A_rel)/std::pow(sigmarSTAT5A_rel, 2);
            break;
    }
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014