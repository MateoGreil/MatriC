#include "libmatric.h"

t_mat4  mat4_translate(float x, float y, float z) {
    t_mat4 translate;

    translate = mat4_identity();
    translate.n[3][0] = x;
    translate.n[3][1] = y;
    translate.n[3][2] = z;
    return (translate);
}