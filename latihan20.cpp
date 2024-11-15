#include<iostream>
#include<iomanip>

using namespace std;

  int main () {
  	 const int maxkaryawan = 50;
  	 string namakaryawan[maxkaryawan];
  	 int jamkerja[maxkaryawan];
  	 float gajiperjam[maxkaryawan];
  	 float gajitotal[maxkaryawan];
  	 int jumlahkaryawan = 0;
  	 char lagi;
  	 
  	 
  	 do {
  	 	cout << " masukan nama karyawan ke- "<< jumlahkaryawan +1 << ": ";
  	 	cin>>namakaryawan[jumlahkaryawan];
  	 	cout<<"masukan jumlah jam kerja"<<namakaryawan[jumlahkaryawan]<< ": ";
  	 	cin>>jamkerja[jumlahkaryawan];
  	 	cout<<"masukan gaji perjam untuk "<<namakaryawan[jumlahkaryawan] << ": ";
  	 	cin>>gajiperjam[jumlahkaryawan];
  	 	
  	 	gajitotal[jumlahkaryawan] = jamkerja[jumlahkaryawan]* gajiperjam[jumlahkaryawan];
  	 	jumlahkaryawan++;
  	 	
  	 	cout<<"apakah anda ingininput data lagi? (Y/T): ";
  	 	cin>> lagi;
  	 	
	   }while (lagi == 'Y' || lagi == 'Y');
	   
	   
	   
	   cout <<
	   "\n=********************************************************=\n";
	    cout << setw(15) << left << "nama"
	         << setw(15) << "jam kerja"
	         << setw(15) << "gaji perjam"
	         << setw(15) << "gaji total" << endl;
	    cout<<"=***************************************************=\n";
	    
	    for (int i = 0; i < jumlahkaryawan; i++) {
	    	cout << setw (15) <<left << namakaryawan[i]
	    	     << setw (15) << jamkerja[i]
	    	     << setw (15) << gajiperjam[i]
	    	     << setw (15) << gajitotal[i] << endl;
	    	     
	   	}
	   	
	   	cout <<"=====================================================\n";
	   	
	   	return 0;
		     
	    
  }
