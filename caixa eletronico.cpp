#include<iostream>
using namespace std;
int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
int main( ){
	cout<<"insira o valor"<<endl;
	cin>>valor;
	notas100=valor/100;
	valor=valor-(notas100*100);
	notas50=valor/50;
	valor=valor-(notas50*50);
	notas20=valor/20;
	valor=valor-(notas20*20);
	notas10=valor/10;
	valor=valor-(notas10*10);
	notas5=valor/5;
	valor=valor-(notas5*5);
	notas2=valor/2;
	valor=valor-(notas2*2);
	valor=valor/1;
	valor=valor-(notas1*1);
	
	cout<<"notas de 100: "<<notas100<<endl;
	cout<<"notas de 50: "<<notas50<<endl;
	cout<<"notas de 20: "<<notas20<<endl;
	cout<<"notas de 10: "<<notas10<<endl;
	cout<<"notas de 5: "<<notas5<<endl;
	cout<<"notas de 2: "<<notas2<<endl;
	cout<<"notas de 1: "<<notas1<<endl;
	system("pause");
	return(0);
}
