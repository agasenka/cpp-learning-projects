#include <iostream>
#include <limits>

int main() {
  int pilihan;
  double suhuAwal;
  double suhuAkhir;

  std::cout << "\n===== Konverter Suhu =====\n";
  do {
    std::cout << "Menu konversi suhu\n";
    std::cout << "1. Celsius → Fahrenheit\n";
    std::cout << "2. Fahrenheit → Celsius\n";
    std::cout << "3. Celsius → Kelvin\n";
    std::cout << "4. Kelvin → Celsius\n";
    std::cout << "5. Kelvin → Fahrenheit\n";
    std::cout << "6. Fahrenheit → Kelvin\n";
    std::cout << "0. Keluar\n";

    std::cout << "Masukkan input: ";
    while (!(std::cin >> pilihan)) {
      std::cout << "Input harus valid!";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (pilihan < 0 || pilihan > 6) {
      std::cout << "Pilihan hanya dapat pilih dari 0-6!\n";
      continue;
    }

    switch (pilihan) {
    case 0:
      std::cout << "Program dihentikan!\n";
      break;

    case 1:
      std::cout << "==== Konverter Celsius → Fahrenheit ====\n";
      std::cout << "Masukkan input dalam celcius: ";
      while (!(std::cin >> suhuAwal)) {
        std::cout << "Input harus valid!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      suhuAkhir = (suhuAwal * 9.0 / 5.0) + 32;
      std::cout << "Suhu awal dalam celsius: " << suhuAwal << " Celsius"
                << '\n';
      std::cout << "Suhu akhir dikonversi ke fahrenheit: " << suhuAkhir
                << " Fahrenheit" << '\n';
      break;

    case 2:
      std::cout << "==== Konverter Fahrenheit → Celsius ====\n";
      std::cout << "Masukkan input dalam fahrenheit: ";
      while (!(std::cin >> suhuAwal)) {
        std::cout << "Input harus valid!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      suhuAkhir = (suhuAwal - 32) * 5.0 / 9.0;
      std::cout << "Suhu awal dalam fahrenheit: " << suhuAwal << " Fahrenheit"
                << '\n';
      std::cout << "Suhu akhir dikonversi ke celsius: " << suhuAkhir
                << " Celsius" << '\n';
      break;

    case 3:
      std::cout << "===== Konverter Celsius → Kelvin =====\n";
      std::cout << "Masukkan input dalam celcius: ";
      while (!(std::cin >> suhuAwal)) {
        std::cout << "Input harus valid!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      suhuAkhir = suhuAwal + 273.15;
      std::cout << "Suhu awal dalam celsius: " << suhuAwal << " Celsius"
                << '\n';
      std::cout << "Suhu akhir dikonversi ke kelvin: " << suhuAkhir << " Kelvin"
                << '\n';
      break;

    case 4:
      std::cout << "===== Konverter Kelvin → Celsius =====\n";
      std::cout << "Masukkan input dalam kelvin: ";
      while (!(std::cin >> suhuAwal)) {
        std::cout << "Input harus valid!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      suhuAkhir = suhuAwal - 273.15;
      std::cout << "Suhu awal dalam kelvin: " << suhuAwal << " Kelvin" << '\n';
      std::cout << "Suhu akhir dikonversi ke celsius: " << suhuAkhir
                << " Celsius" << '\n';
      break;

    case 5:
      std::cout << "===== Kelvin → Fahrenheit =====\n";
      std::cout << "Masukkan input dalam kelvin: ";
      while (!(std::cin >> suhuAwal)) {
        std::cout << "Input harus valid!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      suhuAkhir = (suhuAwal - 273.15) * 9.0 / 5.0 + 32;
      std::cout << "Suhu awal dalam kelvin: " << suhuAwal << " Kelvin" << '\n';
      std::cout << "Suhu akhir dikonversi ke fahrenheit: " << suhuAkhir
                << " Fahrenheit" << '\n';
      break;

    case 6:
      std::cout << "===== Fahrenheit → Kelvin =====\n";
      std::cout << "Masukkan input dalam fahrenheit: ";
      while (!(std::cin >> suhuAwal)) {
        std::cout << "Input harus valid!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      suhuAkhir = (suhuAwal - 32) * 5.0 / 9.0 + 273.15;
      std::cout << "Suhu awal dalam fahrenheit: " << suhuAwal << " Fahrenheit"
                << '\n';
      std::cout << "Suhu akhir dikonversi ke kelvin: " << suhuAkhir << " Kelvin"
                << '\n';
      break;
    }

  } while (pilihan != 0);
}