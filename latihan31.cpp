#include <iostream>
#include <string>

using namespace std;

//tugas ari yoga admaja 

int main() {
    string namaPegawai, kodeJabatan;
    char golongan;
    int pinjaman;
    int gaji = 0, tunjangan = 0;
    double pajak, totalGajiKotor, totalGajiBersih;

    // Input data pegawai
    cout << "Masukkan Nama Pegawai: ";
    getline(cin, namaPegawai);
    cout << "Masukkan Golongan (Ia/Ib/Ic/IIa/IIb/IIc): ";
    cin >> golongan;
    cout << "Masukkan Kode Jabatan (Dir/Sek/Wdr/Stf): ";
    cin >> kodeJabatan;
    cout << "Masukkan Jumlah Pinjaman: ";
    cin >> pinjaman;

    // Menentukan Gaji Berdasarkan Golongan
    switch(golongan) {
        case 'Ia': gaji = 500000; break;
        case 'Ib': gaji = 750000; break;
        case 'Ic': gaji = 1000000; break;
        case 'IIa': gaji = 1500000; break;
        case 'IIb': gaji = 1750000; break;
        case 'IIc': gaji = 2500000; break;
        default: cout << "Golongan tidak valid!\n"; return 1;
    }

    // Menentukan Tunjangan Berdasarkan Kode Jabatan
    if (kodeJabatan == "Dir") tunjangan = 450000;
    else if (kodeJabatan == "Sek") tunjangan = 300000;
    else if (kodeJabatan == "Wdr") tunjangan = 375000;
    else if (kodeJabatan == "Stf") tunjangan = 300000;
    else {
        cout << "Kode jabatan tidak valid!\n";
        return 1;
    }

    // Menghitung Pajak, Total Gaji Kotor, dan Total Gaji Bersih
    pajak = 0.05 * gaji;
    totalGajiKotor = gaji + tunjangan;
    totalGajiBersih = totalGajiKotor - pinjaman - pajak;

    // Menampilkan Hasil
    cout << "\nGaji Pegawai PT. TELKOM\n";
    cout << "Nama Pegawai    : " << namaPegawai << endl;
    cout << "Golongan        : " << golongan << endl;
    cout << "Kode Jabatan    : " << kodeJabatan << endl;
    cout << "Gaji            : Rp " << gaji << endl;
    cout << "Tunjangan       : Rp " << tunjangan << endl;
    cout << "Pinjaman        : Rp " << pinjaman << endl;
    cout << "Pajak           : Rp " << pajak << endl;
    cout << "Total Gaji Kotor: Rp " << totalGajiKotor << endl;
    cout << "Total Gaji Bersih: Rp " << totalGajiBersih << endl;

    return 0;
}
