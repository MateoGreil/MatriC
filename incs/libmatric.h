#ifndef LIBMATRIC_H
    #define LIBMATRIC_H

    #include <stdlib.h>
    #include <math.h>

    typedef struct      s_vec4 {
        float           n[4];
    }                   t_vec4;

    typedef struct      s_mat4 {
        float           n[4][4];
    }                   t_mat4;

    //  [0][0]  [0][1]  [0][2]  ...
    //  [1][0]  [1][1]  ...
    //  [2][0]  ...
    //  ...

    t_vec4              vec4_null(void);
    t_vec4              vec4_mult_mat4(t_vec4 v, t_mat4 m);
    t_vec4              quaternion_create(float x, float y, float z);

    t_mat4              mat4_create(float n[16]);
    t_mat4              mat4_identity(void);
    t_mat4              mat4_translate(float x, float y, float z);
    t_mat4              mat4_scale(float scale);
    t_mat4              mat4_rotate(float x, float y, float z);
    t_mat4              mat4_mult(t_mat4 m1, t_mat4 m2);
    t_mat4              quaternion_to_mat4(t_vec4 quaternion);

#endif 