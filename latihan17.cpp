#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char napeg[30];
	long double penjualan;
	long double komisi;
	long double totlkomisi = 0;
	
	cout << "PT BUBUR DI ADUK"<<endl;
	cout <<"PENJUMLAHAN PENJUALAN PEGAWAI DAN BONUS KOMISINYA" <<endl;
	cout <<"*******************************"<< endl;
	
	for(int i = 0; i< 10; i++){
		cout<<"nama pegawai"<<i + 1<<":";
		cin>>napeg;
		cout<<"jumlah penjualan pegawai :";
		cin>>penjualan;
		
		if(penjualan<500000){
			komisi =0;
		} else{
			komisi = (500000* 0.10)+(penjualan-500000)*0.15;
		}
		cout<<setprecision(13);
		cout<<"bonus komisi pegawai"<< i+1<<":"<<komisi<<endl;
		
		totlkomisi+=komisi;
	}
	cout<<"total komisi yang harus dibayar perusahaan:"<<totlkomisi<<endl;
	return 0;
}
