#include <iostream>
#include <conio.h>
using namespace std;

void tambah2 (int &a){
	a=a+2;
}

main (){
	int x;
	cout<<"Nilai X = "; cin>>x;
	
	cout<<"Nilai awal x : "<<x;
	tambah2(x);
	cout<<" Nilai x setelahy pemanggilan fungsi = "<<x;
	getch();
}
