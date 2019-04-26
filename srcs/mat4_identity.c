#include "libmatric.h"

t_mat4   mat4_identity(void) {
    t_mat4   matrix;
    int     i, j;

    i = 0;
    while (i < 4) {
        j = 0;
        while (j < 4) {
            if (i != j) {
                matrix.n[i][j] = 0;
            } else {
                matrix.n[i][j] = 1;
            }
            j++;
        }
        i++;
    }
    return (matrix);
}