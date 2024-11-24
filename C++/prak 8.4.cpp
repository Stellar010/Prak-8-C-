#include <iostream>
#include <conio.h>
using namespace std;
int Luas(int x,int y){
	int hasil;
	return hasil =x*y;
}
float KLL(int r){
	float keling,phi=22/7;
	keling=2*phi*r;
	return keling;
}
void cetakgaris(int n){
	int i;
	cout<<"\n\n";
	for(i=0;i<=n;i++)
	cout<<"-";cout<<"\n";
}
int main(){
	int p=0,l=0;
	float K;
	cout<<"Menghitung Luas persegi 4"<<endl;
	cout<<endl<<"Masukkan panjang : ";cin>>p;
	cout<<endl<<"Masukkan lebar : ";cin>>l;
	cout<<endl<<"Luas = "<<Luas(p,l);
	cetakgaris(20);
	cout<<"\n\n";
	cout<<"Menghitung keliling lingkaran"<<endl;
	cout<<"Masukan jari : ";
	cin>>l;
	K=KLL(l);
	cout<<"Keliling Lingkaran = "<<K;
	getch();
}
