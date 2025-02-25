#include <iostream>
using namespace std;

int main (){
    // Faktorial
    // 5! = 5 x 4 x 3 x 2 x 1 
    // 6! = 6 x 5 x 4 x 3 x 2 x 1


    int bilangan, hasil = 1;
    cin >> bilangan;

    for (int i = bilangan; i >= 1; i--){
        hasil *= i;
    }

    cout << bilangan << "! = " << hasil << endl;



    cout << "***************************" << endl;
    cout << "Nama : Rahmad Diva Sri Mahendra" << endl; 
    cout << "NPM  : 2310010678" << endl;
    cout << "Kelas  : 3B NONREG " << endl;
    cout << "Program  : faktorial.cpp" << endl;
    cout << "Di buat tgl  : 24/12/2024" << endl;
}