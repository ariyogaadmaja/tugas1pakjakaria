#include<iostream>
#include<conio.h>

using namespace std;

float hitung (int s);
int main()
{
	float volume,sisi ;
	
	cout << "\n menghitung volume KUBUS " ;
	cout << "\n sisi KUBUS : " 
	cin >> sisi ;
	volume = hitung (sisi) ;
	cout << "\n volume KUBUS yaitu : " << volume ;
} 

float hitung (int s)
{
	return ( s + s + s ) ;
}

