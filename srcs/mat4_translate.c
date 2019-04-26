#include "libmatric.h"

t_mat4  mat4_translate(float x, float y, float z) {
    t_mat4 translate;

    translate = mat4_identity();
    translate.n[0][3] = x;
    translate.n[1][3] = y;
    translate.n[2][3] = z;
    return (translate);
}