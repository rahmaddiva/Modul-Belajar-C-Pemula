#include <iostream>
using namespace std;

int main()
{
    char nilai = 'A';

    switch (nilai) {
    case 'A':
        cout << "Luar Biasa" << endl;
        break;
    case 'B':
        cout << "Bagus" << endl;
        break;
    case 'C':
        cout << "Anda Lulus" << endl;
        break;
    case 'D':
        cout << "Anda Tidak Lulus" << endl;
        break;
    default:
        cout << "Tidak ada nilai" << endl;
        break;
    }

    cout << "Karena Nilai anda adalah " << nilai << endl;

    return 0;

}