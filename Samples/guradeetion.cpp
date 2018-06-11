#include <fstream>
#include <iostream>

int main() {
  //ファイルを開く
  std::ofstream file("output.ppm");

  //このようにしてファイルに文字列を出力できる
  file << "P3" << std::endl;
  //横幅と縦幅は512
  file << "512 512" << std::endl;
  //階調数は255
  file << "255" << std::endl;

  //画像データ出力
  //全てのピクセルを(255, 255, 255)=白色にする
  for (int i = 0; i < 512; i++) {
    for (int j = 0; j < 512; j++) {
      int r = i / 512.0 * 255;  //赤色
      int g = j / 512.0 * 255;  //緑色
      int b = 255;              //青色
      file << r << " " << g << " " << b << std::endl;
    }
  }

  //使い終わったらファイルを閉じる
  file.close();
  return 0;
}
