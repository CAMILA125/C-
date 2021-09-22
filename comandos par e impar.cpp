#include<iostream>
using namespace std;
int valor, par, impar,i;
int main(){
	par=0;
	impar=0;
	for(i=1;i<=10;i++){
    	cout<<"valor: ";
    	cin>>valor;
    	if(valor%2==0)par=par+1;
    	else impar=impar+1;
}
	cout<<"exisstem "<<par<<" numeros pares"<<endl;
	cout<<"existem "<<impar<<" numeros impares"<<endl;
	system("pause");
	return(0);
}
