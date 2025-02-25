#include <string.h>
#include <iostream>

using namespace std;

main()
{
	char nama[10];
	int jumlah_karakter;
	
	cout<<"Masukkan Sebuah Kata= "; cin>>nama;
	jumlah_karakter = strlen(nama);
	cout<<" kata " <<nama;
	cout<< " memiliki "<<jumlah_karakter<<" karakter";
	
}
