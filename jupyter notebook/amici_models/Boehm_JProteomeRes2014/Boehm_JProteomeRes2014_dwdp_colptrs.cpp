#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

static constexpr std::array<sunindextype, 12> dwdp_colptrs_Boehm_JProteomeRes2014_ = {
    0, 3, 4, 6, 7, 9, 12, 12, 12, 12, 12, 12
};

void dwdp_colptrs_Boehm_JProteomeRes2014(SUNMatrixWrapper &dwdp){
    dwdp.set_indexptrs(gsl::make_span(dwdp_colptrs_Boehm_JProteomeRes2014_));
}
} // namespace amici
} // namespace model_Boehm_JProteomeRes2014