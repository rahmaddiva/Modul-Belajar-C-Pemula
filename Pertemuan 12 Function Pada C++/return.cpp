#include <iostream>
using namespace std;

int LuasPersegi (int p , int l)
{
    int luas;
    luas = p * l;
    return luas;    
}

int main ()
{
    int a,b;
    cout << "Masukkan panjang: "; cin >> a;
    cout << "Masukkan lebar: "; cin >> b;
    cout << "Luas Persegi :" << LuasPersegi(a,b) << endl;
    return 0;
}