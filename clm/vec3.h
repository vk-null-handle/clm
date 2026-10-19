#pragma once
#include "clm_defines.h"

typedef struct vec3 {
  clm_f32 elements[3];
} Vec3;

clm_inline Vec3 vec3_create(clm_f32 x, clm_f32 y, clm_f32 z) {
  Vec3 out_vec;
  out_vec.elements[0] = x;
  out_vec.elements[1] = y;
  out_vec.elements[2] = z;
  return out_vec;
}

clm_inline Vec3 vec3_add(Vec3 vec_0, Vec3 vec_1) {
  return (Vec3){
    vec_0.elements[0] + vec_1.elements[0],
    vec_0.elements[1] + vec_1.elements[1],
    vec_0.elements[2] + vec_1.elements[2]};
}

clm_inline Vec3 vec3_sub(Vec3 vec_0, Vec3 vec_1) {
  return (Vec3){
    vec_0.elements[0] - vec_1.elements[0],
    vec_0.elements[1] - vec_1.elements[1],
    vec_0.elements[2] - vec_1.elements[2]};
}

clm_inline Vec3 vec3_mul(Vec3 vec_0, Vec3 vec_1) {
  return (Vec3){
    vec_0.elements[0] * vec_1.elements[0],
    vec_0.elements[1] * vec_1.elements[1],
    vec_0.elements[2] * vec_1.elements[2]};
}

clm_inline Vec3 vec3_div(Vec3 vec_0, Vec3 vec_1) {
  return (Vec3){
    vec_0.elements[0] / vec_1.elements[0],
    vec_0.elements[1] / vec_1.elements[1],
    vec_0.elements[2] / vec_1.elements[2]};
}
