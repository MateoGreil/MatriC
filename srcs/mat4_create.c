#include "libmatric.h"

t_mat4  mat4_create(float n[16]) {
    t_mat4 matrix;

    matrix.n[0][0] = n[0];
    matrix.n[1][0] = n[1];
    matrix.n[2][0] = n[2];
    matrix.n[3][0] = n[3];
    matrix.n[0][1] = n[4];
    matrix.n[1][1] = n[5];
    matrix.n[2][1] = n[6];
    matrix.n[3][1] = n[7];
    matrix.n[0][2] = n[8];
    matrix.n[1][2] = n[9];
    matrix.n[2][2] = n[10];
    matrix.n[3][2] = n[11];
    matrix.n[0][3] = n[12];
    matrix.n[1][3] = n[13];
    matrix.n[2][3] = n[14];
    matrix.n[3][3] = n[15];
    return (matrix);
}