#include <iostream>

using namespace std;

int main(){
    int j = 10;
    int k ;
    

    do
    {
        k = 1;
        while (k<=j)
        {
           cout << k*j << " ";
           k++;
        }
        cout << endl;
        j--;
        
    } while (j>=1);

    return 0;
    
}