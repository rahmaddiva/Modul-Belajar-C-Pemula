#include <string.h>
#include <iostream>

using namespace std;

main()
{
	char string1[10]; char string2[20]; int hasil;
	
	cout<<"Masukkan Kata Pertama= " ;cin>>string1;
	cout<<"Masukkan Kata Kedua= " ;cin>>string2;
	
	hasil=strcmp(string1,string2);
	
	if(hasil==0)
	{
		cout<<"Kata pertama dan kedua sama";
	} else {
		cout<<"Kata pertama dan kedua berbeda"; 
	}
	
	
}
