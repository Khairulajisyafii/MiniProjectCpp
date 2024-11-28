#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Membuka file dalam mode membaca dan menulis
    fstream file("contoh.txt", ios::in | ios::out | ios::app);

    // Mengecek apakah file berhasil dibuka
    if (file.is_open()) {
        // Menulis ke file
        file << "Menambahkan data baru ke file.\n";

        // Kembali ke awal file untuk membaca
        file.seekg(0, ios::beg);

        // Membaca file
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }

        // Menutup file
        file.close();
    } else {
        cout << "Gagal membuka file." << endl;
    }

    return 0;
}
