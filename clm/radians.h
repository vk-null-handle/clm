#pragma once
#include "clm_defines.h"

clm_inline clm_f32 clm_deg_to_rad(clm_f32 deg) {
  return deg * (CLM_PI / 180.0f);
}

clm_inline clm_f32 clm_rad_to_deg(clm_f32 rad) {
  return rad * (180.0f / CLM_PI);
}
