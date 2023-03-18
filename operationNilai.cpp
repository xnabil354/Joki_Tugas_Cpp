#include <cstdlib>
#include <iostream>

using namespace std;

void print_banner() {
  cout << R"(   __  ____  ____  ____   __  ____  __  __   __ _ 
 /  \(  _ \(  __)(  _ \ / _\(_  _)(  )/  \ (  ( \
(  O )) __/ ) _)  )   //    \ )(   )((  O )/    /
 \__/(__)  (____)(__\_)\_/\_/(__) (__)\__/ \_)__) 
 Selamat Datang di Program Nilai Mahasiswa)";
  cout << "\n\n";
}

int main() {
  int inputNilai;
  print_banner();
  while (true) {
    cout << "Input Nilai : ";
    cin >> inputNilai;
    if (inputNilai >= 0 && inputNilai <= 100) {
      cout << "Nilai Kamu : " << inputNilai << "\n\n";
      if (inputNilai >= 80) {
        cout << "Kamu Mendapatakan Predikat A\n";
      } else if (inputNilai >= 70) {
        cout << "Kamu Mendapatkan Predikat B\n";
      } else if (inputNilai >= 60) {
        cout << "Kamu Mendapatkan Predikat C\n";
      } else if (inputNilai >= 50) {
        cout << "Kamu Mendapatkan Predikat D\n";
      } else if (inputNilai >= 0) {
        cout << "Kamu Mendapatkan Predikat E / Tidak Lulus\n";
      }
    } else {
      cout << "Warning! Only Number Supported\n" << endl;
    }
    cout << "Thank Your For Using This Program\n" << endl;
    return 0;
  }
}
