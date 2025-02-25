#include <iostream>
using namespace std;

void cetak(int a) {
    for (int i=1; i<=a; i++) {
        cout << i << endl;
    }
}

int main()
{
    cetak(100);
}