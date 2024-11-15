#include <iostream>
using namespace std;

// Fungsi untuk menghitung gaji pokok
int gajiPokok(int jamKerja) {
    return jamKerja * 2000;
}

// Fungsi untuk menghitung lembur
int lembur(int jamKerja) {
    if (jamKerja > 7) {
        return (jamKerja - 7) * 2000 * 1.5;
    } else {
        return 0;
    }
}

// Fungsi untuk menghitung uang makan
int uangMakan(int jamKerja) {
    if (jamKerja >= 8 && jamKerja <= 9) {
        return 1500;
    } else if (jamKerja > 10) {
        return 2500;
    } else {
        return 0;
    }
}

// Fungsi untuk menghitung jasa lembur
int jasaLembur(int jamKerja) {
    if (jamKerja >= 9) {
        return 3000;
    } else {
        return 0;
    }
}

int main() {
    int jamKerja;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    int gaji_pokok = gajiPokok(jamKerja);
    int uang_lembur = lembur(jamKerja);
    int uang_makan = uangMakan(jamKerja);
    int jasa_lembur = jasaLembur(jamKerja);
    int total_gaji = gaji_pokok + uang_lembur + uang_makan + jasa_lembur;

    cout << "Gaji Pokok\t: Rp " << gaji_pokok << endl;
    cout << "Uang Lembur\t: Rp " << uang_lembur << endl;
    cout << "Uang Makan\t: Rp " << uang_makan << endl;
    cout << "Jasa Lembur\t: Rp " << jasa_lembur << endl;
    cout << "Gaji Diterima\t: Rp " << total_gaji << endl;

    return 0;
}
