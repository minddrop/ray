#include <fstream>
#include <iostream>

int main() {
  //ファイルを開く
  std::ofstream file = std::ofstream("output.ppm");

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
      file << "255 255 255" << std::endl;
    }
  }
  //使い終わったらファイルを閉じる
  file.close();
  return 0;
}
