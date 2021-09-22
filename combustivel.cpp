#include<iostream>
#include<string>
using namespace std;
string combustivel;
float litros;
int main (){
	cout<<"tipo de combustivel: A(alcool), G(gasolina), D(disel): ";
	cin>>combustivel;
	cout<<"litros: ";
	cin>>litros;
	
	if (combustivel=="A"){
		cout<<"valor R$: "<<litros*3.79<<endl;
	}
	if (combustivel=="G"){
		cout<<"valor R$: "<<litros*4.39<<endl;
	}
	if (combustivel=="D"){
		cout<<"valor R$: "<<litros*3.34<<endl;
	}
	system("pause");
	return(0);
	
}
