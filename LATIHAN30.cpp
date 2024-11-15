#include <iostream>
#include <conio.h>


using namespace std;

int main() {
	
	char nama [20] ;
	char alamat[35] ;
	
	cout << "Masukan Nama Anda :" ;
	cin.getline( nama, sizeof(nama) ) ;
	cout << "Masukan Alamat Anda :" ;
	cin.getline(alamat, sizeof(alamat)) ;
	cout << "Nama Anda Adalah :" << nama << endl;
	cout << "Alamat Anda :" << alamat << endl;
	
	return 0; 
}
