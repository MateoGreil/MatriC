#include "libmatric.h"

t_vec4  vec4_mult_mat4(t_vec4 v, t_mat4 m) {
    t_vec4  vector;
    int     i;

    i = 0;
    while (i < 4) {
        vector.n[i] = v.n[0] * m.n[i][0] + v.n[1] * m.n[i][1] + v.n[2] * m.n[i][2] + v.n[3] * m.n[i][3];
        i++;
    }
    return (vector);
}