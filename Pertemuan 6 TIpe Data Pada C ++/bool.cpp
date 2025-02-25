#include <iostream>
using namespace std;

int main()
{
	int angka; //Tipe data integer untuk menyimpan data bersifat bilangan bulat
	bool hasil = true;//tipe data boolean yang mempunyai nilai awal true
	
	cout<<"Masukkan Angka = "; cin>>angka;//input bilangin bulat ke variabel "angka"
	
	hasil = angka > 10;
//	variabel "Hasil akan menyimpan nilai kondisi dari variabel "angka "> 10
	
	cout<<hasil; // jika kondisi true maka aka tertulis angka 1 atau 0 jika kondisi false
	return 0;
}
