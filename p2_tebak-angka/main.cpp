// Proyek ke 2, Permainan tebak angka

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>

int main() {
  srand(time(0));

  char ngulang;

  do {
    int angkaAcak = rand() % 100 + 1;
    int tebakan;
    int totalTebakan = 0;

    std::cout << "Tebak Angka\n";

    std::cout << "Komputer telah memilih angka!\n";
    do {
      std::cout << "Tebak angka: ";

      if (!(std::cin >> tebakan)) {
        std::cout << "Input harus berupa angka!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        continue;
      }

      if (tebakan < 1 || tebakan > 100) {
        std::cout << "Masukkan angka hanya dari angka 1 sampai 100!\n";

        continue;
      }

      totalTebakan++;

      if (tebakan == angkaAcak) {
        std::cout << "Angka berhasil ditebak!\n";
      } else if (tebakan < angkaAcak) {
        std::cout << "Tebakan kurang dari angka rahasia!\n";
      } else {
        std::cout << "Tebakan lebih dari angka rahasia!\n";
      }

    } while (tebakan != angkaAcak);

    std::cout << "Kamu menebak sebanyak " << totalTebakan << "x!\n";

    std::cout << "Main lagi? (y/n): ";
    std::cin >> ngulang;

    while (ngulang != 'y' && ngulang == 'Y' && ngulang != 'n' &&
           ngulang != 'N') {
      std::cout << "Apakah kamu mau mengulainya? (y/n): ";
      std::cin >> ngulang;
    }
  } while (ngulang == 'y' || ngulang == 'Y');

  std::cout << "Terima kasih sudah bermain!\n";

  return 0;
}