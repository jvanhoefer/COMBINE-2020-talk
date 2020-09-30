#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "p.h"
#include "k.h"
#include "x.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void sx0_Boehm_JProteomeRes2014(realtype *sx0, const realtype t,const realtype *x, const realtype *p, const realtype *k, const int ip){
    switch(ip) {
        case 6:
            sx0[0] = 207.59999999999999;
            sx0[1] = -207.59999999999999;
            break;
    }
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014