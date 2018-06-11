#include <fstream>
#include <iostream>

int main() {
  std::ofstream file("output.ppm");
  file << "P3" << std::endl;
  file << "3 2" << std::endl;
  file << "255" << std::endl;
  file << "255 0 0 0 255 0 0 0 255" << std::endl;
  file << "255 255 0 255 255 255 0 0 0" << std::endl;
  file.close();
  return 0;
}
