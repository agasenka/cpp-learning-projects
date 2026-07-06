#include <iostream>
#include <limits>

int main() {
  double angka1, angka2;
  int pilihan;
  char ngulang;

  do {
    std::cout << "\n===== Kalkulator Terminal =====\n";

    std::cout << "Masukkan angka pertama: ";

    while (!(std::cin >> angka1)) {
      std::cout << "Input harus berupa angka!";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Masukkan angka kedua: ";
    while (!(std::cin >> angka2)) {
      std::cout << "Input harus berupa angka!";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "\nPilih operasi perhitungan\n";
    std::cout << "1. Tambah\n";
    std::cout << "2. Kurang\n";
    std::cout << "3. Bagi\n";
    std::cout << "4. Kali\n";
    do {
      std::cout << "Pilihan: ";

      if (!(std::cin >> pilihan)) {
        std::cout << "Pilihan hanya berupa angka dari 1 sampai 4 \n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        pilihan = 0;
      } else if (pilihan < 1 || pilihan > 4) {
        std::cout << "Pilihan tidak tersedia! \n";
      }

    } while (pilihan < 1 || pilihan > 4);

    switch (pilihan) {
    case 1:
      std::cout << "Hasil pertambahan: " << angka1 + angka2 << '\n';
      break;
    case 2:
      std::cout << "Hasil pengurangan: " << angka1 - angka2 << '\n';
      break;
    case 3:
      if (angka2 == 0) {
        std::cout << "Pembagian tidak bisa dibagi 0! \n";
      } else {
        std::cout << "Hasil pembagian: " << angka1 / angka2 << '\n';
      }
      break;
    case 4:
      std::cout << "Hasil perkalian: " << angka1 * angka2 << '\n';
      break;
    }

    std::cout << "Apakah anda ingin mengulangnya? y/n: ";
    std::cin >> ngulang;
  }

  while (ngulang == 'y' || ngulang == 'Y');

  return 0;
}
