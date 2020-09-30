#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include "tcl.h"
#include "x.h"

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

void x_rdata_Boehm_JProteomeRes2014(realtype *x_rdata, const realtype *x, const realtype *tcl){
    x_rdata[0] = STAT5A;
    x_rdata[1] = STAT5B;
    x_rdata[2] = pApB;
    x_rdata[3] = pApA;
    x_rdata[4] = pBpB;
    x_rdata[5] = nucpApA;
    x_rdata[6] = nucpApB;
    x_rdata[7] = nucpBpB;
}

} // namespace amici
} // namespace model_Boehm_JProteomeRes2014