#include <iostream>

using namespace std;

void LuasPersegi()
{
    int panjang, lebar;

    cout<< "Masukkan panjang: "; cin >> panjang;
    cout<< "Masukkan lebar: "; cin >> lebar;

    cout << "Luas Persegi :" << panjang * lebar << endl;
}

int main (){
    LuasPersegi();
    return 0;
}