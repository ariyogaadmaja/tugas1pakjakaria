#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Employee {
    string name;
    string grade;
    string jobCode;
    string jobTitle;
    double salary;
    double allowance;
    double loan;
    double tax;
    double grossSalary;
    double netSalary;
};

map<string, double> gradeSalary = {
    {"Ia", 500000},
    {"IIa", 750000},
    {"IIIa", 1000000},
    {"Ib", 1500000},
    {"IIb", 1750000},
    {"IIIb", 2500000}
};

map<string, pair<string, double>> jobDetails = {
    {"Dir", {"Direktur", 450000}},
    {"Sek", {"Sekretaris", 300000}},
    {"Wak", {"Wakil Direktur", 375000}},
    {"Stf", {"Staf Administrasi", 200000}}
};

void calculateSalary(Employee &emp) {
    emp.salary = gradeSalary[emp.grade];
    emp.jobTitle = jobDetails[emp.jobCode].first;
    emp.allowance = jobDetails[emp.jobCode].second;
    emp.tax = 0.05 * emp.salary;
    emp.grossSalary = emp.salary + emp.allowance;
    emp.netSalary = emp.grossSalary - emp.loan - emp.tax;
}

int main() {
    Employee emp;

    cout << "Nama Pegawai: ";
    getline(cin, emp.name);
    cout << "Golongan: ";
    cin >> emp.grade;
    cout << "Kode Jabatan: ";
    cin >> emp.jobCode;
    cout << "Pinjaman: ";
    cin >> emp.loan;

    calculateSalary(emp);

    cout << "\nGAJI PEGAWAI PT. TELKOM\n";
    cout << "Nama Pegawai: " << emp.name << endl;
    cout << "Golongan: " << emp.grade << endl;
    cout << "Kode Jabatan: " << emp.jobCode << endl;
    cout << "Jabatan: " << emp.jobTitle << endl;
    cout << "Gaji: " << emp.salary << endl;
    cout << "Tunjangan: " << emp.allowance << endl;
    cout << "Pinjaman: " << emp.loan << endl;
    cout << "Pajak: " << emp.tax << endl;
    cout << "Total Gaji Kotor: " << emp.grossSalary << endl;
    cout << "Total Gaji Bersih: " << emp.netSalary << endl;

    return 0;
}


