#include "libmatric.h"

t_mat4  mat4_mult(t_mat4 m1, t_mat4 m2) {
    t_mat4 res;
    int i, j;

    i = 0;
    while (i < 4) {
        j = 0;
        while (j < 4) {
            res.n[j][i] = m1.n[0][i] * m2.n[j][0] + m1.n[1][i] * m2.n[j][1] + m1.n[2][i] * m2.n[j][2] + m1.n[3][i] * m2.n[j][3];
            j++;
        }
        i++;
    }
    return (res);
}