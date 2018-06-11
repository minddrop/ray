#ifndef VEC3_H
#define VEC3_H
// cmath, cstdioが二重でincludeされないのはなぜ？
#include <cmath>
#include <cstdio>
class Vec3 {
public:
  double x;
  double y;
  double z;
  Vec3() {
    x = y = z = 0;
  };
  Vec3(double x, double y, double z) {
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
Vec3 operator+(const Vec3& v1, const Vec3& v2) {
  return Vec3(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}
Vec3 operator-(const Vec3& v1, const Vec3& v2) {
  return Vec3(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
Vec3 operator*(double k, const Vec3& v) {
  return Vec3(k * v.x, k * v.y, k * v.z);
}
Vec3 operator*(const Vec3& v, double k) {
  return k * v;
}
Vec3 operator/(double k, const Vec3& v) {
  return Vec3(k / v.x, k / v.y, k / v.z);
}
Vec3 operator/(const Vec3& v, double k) {
  return Vec3(v.x / k, v.y / k, v.z / k);
}
double dot(const Vec3& v1, const Vec3& v2) {
  return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}
Vec3 cross(const Vec3& v1, const Vec3& v2) {
  return Vec3(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z,
      v1.x * v2.y - v1.y * v2.z);
}

// int main() {
//   Vec3 v1(7, 1, 7);
//   Vec3 v2(2, 2, 2);
//   Vec3 v3 = v1 + v2;
//   printf("%f\n", dot(v1, v2));
//   printf("%f\n", dot(v1, v2));
//   printf("%f\n", v3.magnitude());
//   v3.print();
//   return 0;
// }

#endif
