#include<iostream>
#include<string>

using namespace std;

double hitungpajak(double gaji){
	return gaji * 0,05;
}

int main()
{
	string namapegawai,jabatan;
	int golongan,kodejabatan;
	double gaji,tunjangan,pinjaman,pajak,totalgajikotor,totalgajibersih;
	
	cout<<"masukkan nama pegawai: ";
	getline(cin,namapegawai);
	cout<<"masukkan golongan (1-6): ";
	cin>>golongan;
	cout<<"masukkan kode jabatan (1:direktur, 2:sekretaris, 3:wakil direktur, 4:staf administrasi): ";
	cin>>kodejabatan;
	cout<<"masukkan pijaman: ";
	cin>>pinjaman;
	
	switch(golongan) {
		case 1:gaji=500000;
	break;
		case 2:gaji=750000;
	break;
		case 3:gaji=1000000;
	break;
		case 4:gaji=1500000;
	break;
		case 5:gaji=1750000;
	break;
		case 6:gaji=2500000;
	break;
		default:
			cout<<"golongan tidak valid!"<<endl;
			return 1;
	}
	
	switch(kodejabatan){
		case 1:
			tunjangan = 450000;
			break;
		case 2:
			tunjangan = 300000;
			break;
		case 3:
			tunjangan = 375000;
			break;
		case 4:
			tunjangan = 200000;
			break;
		defaul:
			cout<<"kode jabatan tidak valid!"<<endl;
			return 1;
	}
	
	totalgajikotor = gaji + tunjangan;
	pajak = hitungpajak(gaji);
	totalgajibersih = totalgajikotor-pinjaman-pajak;
	
	cout<<"\n----rincian gaji pegawai----"<<endl;
	cout<<"nama pegawai: "<<namapegawai<<endl;
	cout<<"golongan: "<<golongan<<endl;
	cout<<"gaji: Rp"<<gaji<<endl;
	cout<<"tunjangan: Rp"<<tunjangan<<endl;
	cout<<"pinjaman: Rp"<<pinjaman<<endl;
	cout<<"pajak: Rp"<<pajak<<endl;
	cout<<"total gaji kotor: Rp"<<totalgajikotor<<endl;
	cout<<"total gaji bersih: Rp"<<totalgajibersih<<endl;
	
	return 0;
}
