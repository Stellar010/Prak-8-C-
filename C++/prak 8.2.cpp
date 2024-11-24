#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a,b; 
	cout<<"Nilai A = "; cin>>a;
	cout<<"Nilai B = "; cin>>b;
	cout<<"nilai terbesar antara a dan b = "<<fmax(a,b)<<endl;
	cout<<"nilai terkecil antara a dan b = "<<fmin(a,b)<<endl;
	cout<<"A pangkat B ("<<a<<"^"<<b<<") = "<<pow(a,b)<<endl;
}
