#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_Boehm_JProteomeRes2014 {

static constexpr std::array<sunindextype, 12> dwdp_rowvals_Boehm_JProteomeRes2014_ = {
    0, 1, 2, 7, 6, 8, 4, 3, 5, 0, 1, 2
};

void dwdp_rowvals_Boehm_JProteomeRes2014(SUNMatrixWrapper &dwdp){
    dwdp.set_indexvals(gsl::make_span(dwdp_rowvals_Boehm_JProteomeRes2014_));
}
} // namespace amici
} // namespace model_Boehm_JProteomeRes2014