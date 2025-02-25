#include <iostream>
using namespace std;

int a,b,k,z,c,d,e;
void awalan();
void awalan()
{
    cout << "Masukkan nilai pertama = "; cin >> a;
    cout << "Masukkan nilai kedua = "; cin >> b;
}

void pemprog();
void pemprog()
{
    cout << "Nama : Rahmad Diva Sri Mahendra" << endl;
    cout << "Prodi : Teknik Informatika" << endl;
    cout << "Kelas : 3 Nonreg BJB" << endl;
}

void penjumlahan();
void penjumlahan()
{
    awalan ();
    z = a + b;
    cout << "Hasil penjumlahan = " << z << endl;
}

void pengurangan();
void pengurangan ()
{
    awalan ();
    c = a - b;
    cout << "Hasil pengurangan = " << c << endl;
}

void perkalian();
void perkalian ()
{
    awalan ();
    d = a * b;
    cout << "Hasil perkalian = " << d << endl;
}

void pembagian();
void pembagian ()
{
    awalan ();
    e = a / b;
    cout << "Hasil pembagian = " << e << endl;
}

void keluar();
void keluar()
{
    cout << "Terima kasih" << endl;
}

main()
{
    pemprog();
    cout << "Menu Utama" << endl;
    cout << "1. Operasi Penjumlahan" << endl;
    cout << "2. Operasi Pengurangan" << endl;
    cout << "3. Operasi Perkalian" << endl;
    cout << "4. Operasi Pembagian" << endl;
    cout << "5. Keluar" << endl;
    cout << "Masukkan Kode [1/2/3/4/5] = "; cin >> k;
    
    switch (k)
    {
        case 1:
            penjumlahan();
            break;
        case 2:
            pengurangan();
            break;
        case 3:
            perkalian();
            break;
        case 4:
            pembagian();
            break;
        case 5:
            keluar();
            break;
        default:
            cout << "Pilihan cuman ada 5" << endl;
    }
    return 0;
}