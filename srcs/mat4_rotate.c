#include "libmatric.h"

t_mat4  mat4_rotate(float x, float y, float z) {
    t_vec4 quat = quaternion_create(x, y, z);
    t_mat4 mat = quaternion_to_mat4(quat);

    return (mat);
}