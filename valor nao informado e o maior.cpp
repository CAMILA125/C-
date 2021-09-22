#include<iostream>
using namespace std;
int valor, maior, cont; 
int main(){
	cont=0;
	do{
	cout<<"insira um valor: ";
	cin>> valor;
	cont=cont+1;
	
	if (cont==1) maior=valor;
	if (valor>maior) maior=valor;
		
	}while (valor>0);
	cout<<"maior valor eh: "<<maior<<endl;
	system("pause");
	return(0);
}
