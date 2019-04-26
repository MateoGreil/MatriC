#include "libmatric.h"

t_mat4  mat4_mult(t_mat4 m1, t_mat4 m2) {
    t_mat4 res;
    int i, j;

    i = 0;
    while (i < 4) {
        j = 0;
        while (j < 4) {
            res.n[i][j] = m1.n[i][0] * m2.n[0][j] + m1.n[i][1] * m2.n[1][j] + m1.n[i][2] * m2.n[2][j] + m1.n[i][3] * m2.n[3][j];
            j++;
        }
        i++;
    }
    return (res);
}