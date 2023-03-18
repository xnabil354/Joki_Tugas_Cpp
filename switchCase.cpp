#include <iostream>
#include <string>

using namespace std;

int main() {
  int kode, jum_beli, harga1, harga2, harga3, total1, total2, total3, jumlh1,
      jumlh2, jumlh3, total;
  int dis, hasildis, jmlbyr, kembalian;
  char lagi;

awal:
  system("cls");
  cout << "======================================" << endl;
  cout << "            TEKAJEH STORE " << endl;
  cout << "======================================" << endl;
  cout << "Simple Program Mini Store With Switch Case Made by u " << endl;
  cout << "======================================" << endl;
  cout << "Note : Diskon Jika Kakak Belanja diatas Nominal Rp. 100.000,-\n" << endl;
  cout << "1. Kaos Jazz = Rp. 150.000,-" << endl;
  cout << "2. Tas Slempang = Rp. 100.000,-" << endl;
  cout << "3. Celana Panjang = Rp. 250.000,-" << endl;
  cout << "======================================" << endl << endl;

  cout << "Input Total Belanjaan : ";
  cin >> jum_beli;

  for (int i = 0; i < jum_beli; i++) {
    cout << endl;
    cout << "Input Pilihan Produk Anda ( 1-3 ) : ";
    cin >> kode;

    switch (kode) {

    case 1:

      cout << "Item : Kaos Jazz" << endl;
      harga1 = 150000;
      cout << "Input Jumlah Barang : ";
      cin >> jumlh1;

      total1 = jumlh1 * harga1;
      cout << "Total Harga Barang : " << total1;

      cout << endl;
      break;

    case 2:

      cout << "Item : Tas Slempang" << endl;
      harga2 = 100000;
      cout << "Input Jumlah Barang : ";
      cin >> jumlh2;

      total2 = jumlh2 * harga2;
      cout << "Total Harga Barang : " << total2 << endl;

      cout << endl;
      break;

    case 3:

      cout << "Item : Celana" << endl;
      harga3 = 250000;
      cout << "Input Jumlah Barang : ";
      cin >> jumlh3;

      total3 = jumlh3 * harga3;
      cout << "Total Harga Barang : " << total3 << endl;
      cout << endl;

      break;
    }
  }

  total = total1 + total2 + total3;
  cout << endl;
  cout << "Total Belanja Kakak : " << total << endl;

  if (total >= 1000000) {
    dis = 0.35 * total;
    hasildis = total - dis;

    cout << "Total setelah diskon     : " << hasildis << endl;
    cout << "--------------------------------------" << endl;
    cout << "Input Jumlah Pembayaran : ";
    cin >> jmlbyr;
    kembalian = jmlbyr - hasildis;
    cout << "Uang Kembalian : " << kembalian << endl;

  } else if (total > 900000 && total < 1000000) {
    dis = 0.15 * total;
    hasildis = total - dis;
    cout << "Total setelah Diskon : " << hasildis << endl;
    cout << "--------------------------------------" << endl;
    cout << "Input Jumlah Pembayaran : ";
    cin >> jmlbyr;
    kembalian = jmlbyr - hasildis;
    cout << "Uang Kembalian : " << kembalian << endl;
  } else {
    cout << "Input Jumlah Pembayaran : ";
    cin >> jmlbyr;
    kembalian = jmlbyr - total;
    cout << "Uang Kembalian : " << kembalian << endl;
  }

  cout << "Kakak Ingin Belanja Lagi ? (y/n) : ";
  cin >> lagi;
  if (lagi == 'y' || lagi == 'Y') {
    goto awal;
  } else if (lagi == 'N' || lagi == 'n') {
    goto selesai;
  } else {
    cout << "Invalid Input... Try Again (y/n)" << endl;
  }
selesai:
  system("cls");
  cout << "Thanks For Shopping... Enjoyed Your Order... Good Byeee Sir" << endl;

  return 0;
}
