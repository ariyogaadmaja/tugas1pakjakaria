#include<iostream>
#include<conio.h>

using namespace std;

float luas(float panjang, float lebar );
int main()
{
	float panjang_se, lebar_se, luas_se ;
	
	cout <<" program menhitung luas segiempat \n ";
	/*input panjang dan  lebar */
	cout << "\n\t panjang : " ;
	cin >> panjang_se ;
	cin >> lebar_se ;
	/*menghitung luas segirmpat*/
	luas_se = luas (panjang_se, lebar_se ) ;
	cout << "\n\n luas segiempat = " << luas_se ;
}

float luas(float panjang , float lebar )
{
	return ( panjang * lebar ) ;
}
