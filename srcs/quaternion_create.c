#include "libmatric.h"

/*t_vec4 eulerToQuaternion(t_vec4 axis, float angle) {
    t_vec4 quaternion;

    quaternion.n[0] = axis.n[0] * sin(angle / 2);
    quaternion.n[1] = axis.n[1] * sin(angle / 2);
    quaternion.n[2] = axis.n[2] * sin(angle / 2);
    quaternion.n[3] = cos(angle / 2);
    return (quaternion);
}*/

t_vec4  quaternion_create(float roll, float pitch, float yaw) {
    t_vec4 quaternion;

    double cy = cos(yaw * 0.5);
    double sy = sin(yaw * 0.5);
    double cp = cos(pitch * 0.5);
    double sp = sin(pitch * 0.5);
    double cr = cos(roll * 0.5);
    double sr = sin(roll * 0.5);

    quaternion.n[3] = cy * cp * cr + sy * sp * sr;
    quaternion.n[0] = cy * cp * sr - sy * sp * cr;
    quaternion.n[1] = sy * cp * sr + cy * sp * cr;
    quaternion.n[2] = sy * cp * cr - cy * sp * sr;
    return (quaternion);
}