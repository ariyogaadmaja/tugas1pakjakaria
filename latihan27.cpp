#include <iostream>
#include <string>
using namespace std;
//ari yoga admaja

struct Mahasiswa {
    string npm;
    string nama;
    int nilaiMid;
    int nilaiSemester;
    float nilaiAkhir;
    char nilaiHuruf;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(int mid, int semester) {
    return (0.4 * mid) + (0.6 * semester);
}

// Fungsi untuk menentukan nilai huruf
char tentukanNilaiHuruf(float nilaiAkhir) {
    if (nilaiAkhir >= 80 && nilaiAkhir <= 100) return 'A';
    else if (nilaiAkhir >= 70 && nilaiAkhir < 80) return 'B';
    else if (nilaiAkhir >= 55 && nilaiAkhir < 70) return 'C';
    else if (nilaiAkhir >= 40 && nilaiAkhir < 55) return 'D';
    else return 'E';
}

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    Mahasiswa mahasiswa[100];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;
        cout << "NPM: ";
        cin >> mahasiswa[i].npm;
        cin.ignore(); // Mengabaikan karakter newline
        cout << "Nama: ";
        getline(cin, mahasiswa[i].nama);
        cout << "Nilai Mid: ";
        cin >> mahasiswa[i].nilaiMid;
        cout << "Nilai Semester: ";
        cin >> mahasiswa[i].nilaiSemester;

        // Hitung nilai akhir dan tentukan nilai huruf
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].nilaiMid, mahasiswa[i].nilaiSemester);
        mahasiswa[i].nilaiHuruf = tentukanNilaiHuruf(mahasiswa[i].nilaiAkhir);
    }

    // Menampilkan hasil
    cout << "\nData Nilai Mahasiswa\n";
    cout << "------------------------------------------\n";
    cout << "NPM\tNama\t\tNilai Akhir\tNilai Huruf\n";
    cout << "------------------------------------------\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << mahasiswa[i].npm << "\t" << mahasiswa[i].nama << "\t\t" << mahasiswa[i].nilaiAkhir << "\t\t" << mahasiswa[i].nilaiHuruf << endl;
    }
    return 0;
}

