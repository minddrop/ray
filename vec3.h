#ifndef VEC3_H
#define VEC3_H
// cmath, cstdioが二重でincludeされないのはなぜ？
#include <cmath>
#include <cstdio>
class vec3 {
public:
  double x;
  double y;
  double z;
  vec3() {
    x = y = z = 0;
  };
  vec3(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
  };
  double magnitude() const {
    return std::sqrt(x * x + y * y + z * z);
  };
  void print() const {
    printf("%f %f %f\n", this->x, this->y, this->z);
  }
};
vec3 operator+(const vec3& v1, const vec3& v2) {
  return vec3(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}
vec3 operator-(const vec3& v1, const vec3& v2) {
  return vec3(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
vec3 operator*(double k, const vec3& v) {
  return vec3(k * v.x, k * v.y, k * v.z);
}
vec3 operator*(const vec3& v, double k) {
  return k * v;
}
vec3 operator/(double k, const vec3& v) {
  return vec3(k / v.x, k / v.y, k / v.z);
}
vec3 operator/(const vec3& v, double k) {
  return vec3(v.x / k, v.y / k, v.z / k);
}
double dot(const vec3& v1, const vec3& v2) {
  return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}
vec3 cross(const vec3& v1, const vec3& v2) {
  return vec3(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z,
      v1.x * v2.y - v1.y * v2.z);
}

#endif
