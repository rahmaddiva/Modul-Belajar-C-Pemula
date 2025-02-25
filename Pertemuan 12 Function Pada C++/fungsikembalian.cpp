#include <iostream>
using namespace std;

int maksimal(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }

}

int main()
{
    cout << maksimal(30,20);
}