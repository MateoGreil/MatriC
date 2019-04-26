#include "libmatric.h"

t_vec4  vec4_null(void) {
    t_vec4  vector;
    int     i;

    i = 0;
    while (i < 3) {
        vector.n[i] = 0;
        i++;
    }
    vector.n[i] = 1;
    return (vector);
}