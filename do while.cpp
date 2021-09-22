#include<iostream>
using namespace std;
int valor;
int main(){
	do {
		cout<<"valor; ";
		cin>>valor;
		if (valor>=0)
		cout<<"quadrado:"<<valor*valor<<endl;
	} while(valor>=0);
	return(0);
	
}
