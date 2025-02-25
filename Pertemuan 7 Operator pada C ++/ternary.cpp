#include <iostream>
using namespace std;

int main()
{
	int x ;
	// meminta user untuk memasukan nilai x dari keyboard
	cout << " Masukkan Nilai x :";
	cin >> x;
	cout <<endl;
	
	//melakukan pemeriksaan terhadap nlai x
	x = (x<10) ? -x : x;
	
	//menampilkan nilai x setelah proses pemeriksa
	cout<<"|x| = " <<x;
	
	return 0;
}
