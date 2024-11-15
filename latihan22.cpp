#include<iostream>
#include<iomanip>

//ari yoga admaja
using namespace std;

int main() {
    // Declare variables
    char nama[50], jabatan[20];
    int golongan, kode_jabatan, gaji = 0, tunjangan = 0, pinjaman, pajak;
    int total_gaji_kotor, total_gaji_bersih;
    
    // Input data
    cout << "Masukkan Nama Pegawai: ";
    cin.getline(nama, 50);
    cout << "Masukkan Golongan (1a, 1b, 2a, 2b, 3a): ";
    cin >> golongan;
    cout << "Masukkan Kode Jabatan (1: Direktur, 2: Sekertaris, 3: Wakkil direktur, 4: Staf adminitasi): ";
    cin >> kode_jabatan;
    cout << "Masukkan Jumlah Pinjaman: ";
    cin >> pinjaman;

    // Set salary based on golongan
    switch(golongan) {
        case 1: gaji = 500000; break;
        case 2: gaji = 750000; break;
        case 3: gaji = 1000000; break;
        case 4: gaji = 1500000; break;
        case 5: gaji = 2500000; break;
        default: cout << "Golongan tidak valid!"; return 1;
    }

    // Set tunjangan based on kode_jabatan
    switch(kode_jabatan) {
        case 1: tunjangan = 450000; (jabatan, "Direktur"); break;
        case 2: tunjangan = 300000; (jabatan, "Sekretaris"); break;
        case 3: tunjangan = 375000; (jabatan, "Wakil Direktur"); break;
        case 4: tunjangan = 200000; (jabatan, "Staf Administrasi"); break;
        default: cout << "Kode Jabatan tidak valid!"; return 1;
    }

    // Calculate tax (5% from salary)
    pajak = 0.05 * gaji;

    // Calculate total gross salary and net salary
    total_gaji_kotor = gaji + tunjangan;
    total_gaji_bersih = total_gaji_kotor - pinjaman - pajak;

    // Output salary details
    cout << "Nama Pegawai: " << nama << endl;
    cout << "Jabatan: " << jabatan << endl;
    cout << "Gaji: " << gaji << endl;
    cout << "Tunjangan: " << tunjangan << endl;
    cout << "Pajak: " << pajak << endl;
    cout << "Total Gaji Kotor: " << total_gaji_kotor << endl;
    cout << "Total Gaji Bersih: " << total_gaji_bersih << endl;

    return 0;
}
