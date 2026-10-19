#pragma once
#include "clm_defines.h"

typedef struct vec2 {
  clm_f32 elements[2];
} Vec2;

clm_inline Vec2 vec2_create(clm_f32 x, clm_f32 y) {
  Vec2 out_vec;
  out_vec.elements[0] = x;
  out_vec.elements[1] = y;
  return out_vec;
}

clm_inline Vec2 vec2_add(Vec2 vec_0, Vec2 vec_1) {
  return (Vec2){
    vec_0.elements[0] + vec_1.elements[0],
    vec_0.elements[1] + vec_1.elements[1]};
}

clm_inline Vec2 vec2_sub(Vec2 vec_0, Vec2 vec_1) {
  return (Vec2){
    vec_0.elements[0] - vec_1.elements[0],
    vec_0.elements[1] - vec_1.elements[1]};
}

clm_inline Vec2 vec2_mul(Vec2 vec_0, Vec2 vec_1) {
  return (Vec2){
    vec_0.elements[0] * vec_1.elements[0],
    vec_0.elements[1] * vec_1.elements[1]};
}

clm_inline Vec2 vec2_div(Vec2 vec_0, Vec2 vec_1) {
  return (Vec2){
    vec_0.elements[0] / vec_1.elements[0],
    vec_0.elements[1] / vec_1.elements[1]};
}


