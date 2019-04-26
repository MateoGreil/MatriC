#include "libmatric.h"

/*Matrix44 m1( 
quat.w, quat.z, -quat.y, quat.x, 
-quat.z, quat.w, quat.x, quat.y, 
quat.y, -quat.x, quat.w, quat.z, 
-quat.x, -quat.y, -quat.z, quat.w ); 
 
Matrix44 m2( 
quat.w, quat.z, -quat.y, -quat.x, 
-quat.z, quat.w, quat.x, -quat.y, 
quat.y, -quat.x, quat.w, -quat.z, 
quat.x, quat.y, quat.z, quat.w ); 
 
return m1 * m2;*/

t_mat4  quaternion_to_mat4(t_vec4 quaternion) {
    t_mat4  m1, m2;
    float   n1[16] = {
        quaternion.n[3], quaternion.n[2], -quaternion.n[1], quaternion.n[0],
        -quaternion.n[2], quaternion.n[3], quaternion.n[0], quaternion.n[1],
        quaternion.n[1], -quaternion.n[0], quaternion.n[3], quaternion.n[2],
        -quaternion.n[0], -quaternion.n[1], -quaternion.n[2], quaternion.n[3]
    };
    float   n2[16] = {
        quaternion.n[3], quaternion.n[2], -quaternion.n[1], -quaternion.n[0],
        -quaternion.n[2], quaternion.n[3], quaternion.n[0], -quaternion.n[1],
        quaternion.n[1], -quaternion.n[0], quaternion.n[3], -quaternion.n[2],
        quaternion.n[0], quaternion.n[1], quaternion.n[2], quaternion.n[3]
    };

    m1 = mat4_create(n1);
    m2 = mat4_create(n2);
    return mat4_mult(m1, m2);
}