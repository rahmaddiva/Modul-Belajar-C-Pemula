#include <iostream>
using namespace std;

int main()
{
	int a = 60, b =13;
	//a = 00111100
	//b = 00001101
	
	cout<<"a&b = " <<(a&b)<<endl;
	// a&b = 00001100
	cout<<"a|b = " <<(a|b)<<endl;
	// a|b = 00111101
	cout<<"a^b = "<<(a^b)<<endl;
	// a^b = 00110001
	cout<<"a~ = " <<(~a)<<endl;
	// ~a = 11000011
	cout<<"a << 2 = "<< (a << 2)<<endl;
	// a = 11110000
	cout<<"a >> 2 = "<< (a >> 2)<<endl;
	// a = 00001111
	
	return 0 ;
}
