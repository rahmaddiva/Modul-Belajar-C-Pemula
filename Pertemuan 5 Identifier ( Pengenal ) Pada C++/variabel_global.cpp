#include <iostream>
using namespace std;


int x;

//kita membuat 2 buah fungsi utama yaitu fungsi test() dan fungsi main() 

//membuat fungsi bernama test()
void test()
{
	x = 28;
	cout<<"Nilai X didalam fungsi test() adalah = "<<x<<endl;
	
}

int main()
{
	x=10;
	cout<<"Nilai X didalam fungsi main() adalah :" <<x<<endl;
	//memanggil fungsi test
	test();
	return 0;
}


