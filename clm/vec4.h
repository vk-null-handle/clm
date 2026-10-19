#pragma once
#include "clm_defines.h"

typedef struct vec4 {
  clm_f32 elements[4];
} Vec4;

clm_inline Vec4 vec4_create(clm_f32 x, clm_f32 y, clm_f32 z, clm_f32 w) {
  Vec4 out_vec;
  out_vec.elements[0] = x;
  out_vec.elements[1] = y;
  out_vec.elements[2] = z;
  out_vec.elements[3] = w;
  return out_vec;
}

clm_inline Vec4 vec4_add(Vec4 vec_0, Vec4 vec_1) {
  return (Vec4){
    vec_0.elements[0] + vec_1.elements[0],
    vec_0.elements[1] + vec_1.elements[1],
    vec_0.elements[2] + vec_1.elements[2],
    vec_0.elements[3] + vec_1.elements[3]};
}

clm_inline Vec4 vec4_sub(Vec4 vec_0, Vec4 vec_1) {
  return (Vec4){
    vec_0.elements[0] - vec_1.elements[0],
    vec_0.elements[1] - vec_1.elements[1],
    vec_0.elements[2] - vec_1.elements[2],
    vec_0.elements[3] - vec_1.elements[3]};
}

clm_inline Vec4 vec4_mul(Vec4 vec_0, Vec4 vec_1) {
  return (Vec4){
    vec_0.elements[0] * vec_1.elements[0],
    vec_0.elements[1] * vec_1.elements[1],
    vec_0.elements[2] * vec_1.elements[2],
    vec_0.elements[3] * vec_1.elements[3]};
}

clm_inline Vec4 vec4_div(Vec4 vec_0, Vec4 vec_1) {
  return (Vec4){
    vec_0.elements[0] / vec_1.elements[0],
    vec_0.elements[1] / vec_1.elements[1],
    vec_0.elements[2] / vec_1.elements[2],
    vec_0.elements[3] / vec_1.elements[3]};
}
