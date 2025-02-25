#include <iostream>
using namespace std;


int main() 
{
	int x; // deklarasi variabel x
	
	//mengisi nilai kedalam variabel x dengan nilai 7
	x=7;
	
	//melakukan pre-decrement
	cout<<"Nilai x nilai awal : " << x << endl;
	cout<<"Nilai --x          : " << --x << endl;
	cout<<"Nilai x nilai akhir: " << x << endl << endl;
	
	//merubah nilai x menjadi 10
	x = 10;
	
	//melakukan post-decrement
	cout<<"Nilai x nilai awal : " << x << endl;
	cout<<"Nilai x--          : " << x-- << endl;
	cout<<"Nilai x nilai akhir: " << x << endl << endl;
	
	return 0;
}
