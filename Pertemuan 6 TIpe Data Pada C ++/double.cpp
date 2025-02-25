#include <iostream>
using namespace std;

int main()
{
	double jari, hasil ;
	const double p=3.14;
	
	cout<<"Masukkan Jumlah Jari-Jari = "; cin>>jari;
	hasil = jari*(jari*p);
	cout<<"Luas dari lingkaran 3.14 X " <<jari<<" X " <<jari<<" adalah " <<hasil;
	
	return 0;
}
