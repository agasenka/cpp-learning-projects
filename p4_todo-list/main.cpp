// Proyek ke 4, to do list simpel tanpa I/O

#include <cstddef>
#include <iostream>
#include <istream>
#include <limits>
#include <string>
#include <vector>

int main() {
  int pilihan;
  int pilihanHapus;
  std::string tugas;
  std::vector<std::string> daftarTugas;

  do {
    std::cout << "===== To Do List =====\n";
    std::cout << "1. Lihat tugas\n";
    std::cout << "2. Tambah tugas\n";
    std::cout << "3. Hapus tugas\n";
    std::cout << "0. Keluar\n";
    std::cout << "Input pilihan: ";
    while (!(std::cin >> pilihan)) {
      std::cout << "Masukkan input yang valid!";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (pilihan < 0 || pilihan > 3) {
      std::cout << "Pilihan hanya dapat pilih dari 0-3!\n";
      continue;
    }

    switch (pilihan) {
    case 0:
      std::cout << "Program dihentikan!\n";
      break;

    case 1:
      if (daftarTugas.empty()) {
        std::cout << "Tidak ada tugas yang tersedia!\n";
        continue;
      } else {
        std::cout << "Tugas yang tersedia: \n";
        for (std::size_t i = 0; i < daftarTugas.size(); i++) {
          std::cout << i + 1 << ". " << daftarTugas[i] << "\n";
        }
      }
      break;

    case 2:
      std::cout << "Masukkan nama tugas: ";
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::getline(std::cin, tugas);
      daftarTugas.push_back(tugas);
      std::cout << "Tugas berhasil ditambahkan!\n";
      break;

    case 3:
      std::cout << "Pilih tugas yang ingin dihapus! \n";
      if (daftarTugas.empty()) {
        std::cout << "Tidak ada tugas yang tersedia!\n";
        continue;
      } else {
        std::cout << "Tugas yang tersedia: \n";
        for (std::size_t i = 0; i < daftarTugas.size(); i++) {
          std::cout << i + 1 << ". " << daftarTugas[i] << "\n";
        }
      }
      std::cout << "Input pilihan: ";
      while (!(std::cin >> pilihanHapus)) {
        std::cout << "Masukkan input yang valid!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }

      if (pilihanHapus < 1 || pilihanHapus > daftarTugas.size()) {
        std::cout << "Pilihan hanya dapat pilih dari tugas yang tersedia!\n";
        continue;
      }

      daftarTugas.erase(daftarTugas.begin() + pilihanHapus - 1);
      std::cout << "Tugas berhasil dihapus!\n";
      break;
    }
  } while (pilihan != 0);

  return 0;
}