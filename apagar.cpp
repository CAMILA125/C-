#include<iostream>
using namespace std;
int  i, valor, numero;
int main(){
		cout<<"valor: ";
    	cin>>valor;
    	numero = 1;
    	
    	for(i=1;i<=10;i++){
    	cout<<valor<<"*"<<numero<<"="<<(valor*numero)<<endl;
		numero=numero +1;
    }
    	
	system("pause");
	return(0);
}
