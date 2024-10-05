#include<iostream>
#include<iomanip>

using namespace std;
//ariyogaadmaja

int main(){
	int matriksA[2][2], matriksB[2][2],hasil[2][2];
	
	//input untuk matriks A
	cout <<"masukan elemen matrik A (2x2):" <<endl;
	for (int i = 0; i< 2; i++){
		for (int j=0; j < 2; j++){
			cout <<"A["<< i << "]["<< j << "]: ";
			cin >> matriksA[i][j];
		}
	}
	// inpit untuk martiks B
	cout<<"masukan elemen matriks B (2x2):"<< endl;
	for (int i=0; i <2; i++) {
		for (int j = 0;j < 2; j++){
			cout<<"B[" << i << "][" << "]: ";
		cin>>matriksB[2][j];
		} 
	}
	//menjumlakan kedua matriks
	for (int i = 0; i < 2; i++) {
		for (int j=0; j < 2; j ++){
			hasil[i][j] = matriksA[i][j] + matriksB[i][j];
		}
	}
	
	// menampilkan hasil penjumlahan
	cout<<"hasil penjumlahan matriks A dan B adalah:" <<endl;
	for (int i= 0; i < 2; i ++){
		for (int j=0; j < 2; j++) {
			cout<<hasil[i][j] << " ";
		} 
		cout << endl;
	}
	return 0;
} 
