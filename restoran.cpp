#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  int menu, harga;
  float bayar, jumbel, tagihan;
  cin >> menu;

  if (menu == 1) {
    cout << "nasi rames";
    cin >> harga;
  }
  if (menu == 2) {
    cout << "gorengan";
    cin >> harga;
  }
  if (menu == 3) {
    cout << "es teh";
    harga = 3000;
  }

  if (jumbelgorengan > 4) {
    
  }

  cin >> jumbel;
  tagihan = jumbel * harga;
  if (tagihan >= 25000) {
    bayar = tagihan - (tagihan * 0.01);
    cout << bayar;
  } else {
    cout << tagihan;
  }
}