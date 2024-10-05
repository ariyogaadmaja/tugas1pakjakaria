#include<iostream>
#include<iomanip>

using namespace std;
//ariyogaadmaja

int main () { 
float harga,jumlahjual,totalharga,diskon,totalbayar;
char nama[20];
cout<< "TOKO BAJU"<<endl;
cout<<"nama barang: ";
cin>>nama;
cout<<"harga : ";
cin>>harga;
cout<<"jumlah jual : ";
cin>>jumlahjual;

cout<<setprecision(13);
totalharga =harga*jumlahjual;
cout<<"total harga : "<<totalharga<<endl;

diskon=totalharga*0.10;
cout<<"diskon : "<<diskon<<endl;

totalbayar=totalharga-diskon;
cout<<"total harga : "<<totalbayar<<endl;

     cout<<"total barang yang terjual di toko adalah : "<<totalharga <<endl;
     cout<<"apakah mau lanjut input ? (Y/T) : ";
     cout<<endl;

return 0;
  
}
	   
 


	
	

