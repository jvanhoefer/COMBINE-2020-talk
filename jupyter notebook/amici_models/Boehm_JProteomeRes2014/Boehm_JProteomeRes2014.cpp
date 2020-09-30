#include "Boehm_JProteomeRes2014.h"
#include <array>

namespace amici {

namespace model_Boehm_JProteomeRes2014 {

std::array<const char*, 11> parameterNames = {
    "Epo_degradation_BaF3",
"k_exp_hetero",
"k_exp_homo",
"k_imp_hetero",
"k_imp_homo",
"k_phos",
"ratio",
"specC17",
"noiseParameter1_pSTAT5A_rel",
"noiseParameter1_pSTAT5B_rel",
"noiseParameter1_rSTAT5A_rel",
};

std::array<const char*, 0> fixedParameterNames = {
    
};

std::array<const char*, 8> stateNames = {
    "STAT5A",
"STAT5B",
"pApB",
"pApA",
"pBpB",
"nucpApA",
"nucpApB",
"nucpBpB",
};

std::array<const char*, 3> observableNames = {
    "nan",
"nan",
"nan",
};

std::array<const char*, 11> parameterIds = {
    "Epo_degradation_BaF3",
"k_exp_hetero",
"k_exp_homo",
"k_imp_hetero",
"k_imp_homo",
"k_phos",
"ratio",
"specC17",
"noiseParameter1_pSTAT5A_rel",
"noiseParameter1_pSTAT5B_rel",
"noiseParameter1_rSTAT5A_rel",
};

std::array<const char*, 0> fixedParameterIds = {
    
};

std::array<const char*, 8> stateIds = {
    "STAT5A",
"STAT5B",
"pApB",
"pApA",
"pBpB",
"nucpApA",
"nucpApB",
"nucpBpB",
};

std::array<const char*, 3> observableIds = {
    "pSTAT5A_rel",
"pSTAT5B_rel",
"rSTAT5A_rel",
};


} // namespace model_Boehm_JProteomeRes2014

} // namespace amici
