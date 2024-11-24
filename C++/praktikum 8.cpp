#include <iostream>
#include <string.h>

using namespace std;
int main (){
	char info[30];
	strcpy(info, "TEKNIK");
	cout<<info<<endl;
	
	cout<<"Panjang karakter="<<strlen(info);
	cout<<"\n";
}
