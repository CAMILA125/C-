#include<iostream>
using namespace std;
int opcao;
float km, L, mdconsumo;
int main (){
	do{
		system("cls");
	cout<<"menu de opcoes:"<<endl;
	cout<<"1-calcular media de consumo"<<endl;
	cout<<"2-calcular km percorreidos"<<endl;
	cout<<"3-sair"<<endl;
	cout<<"opcao:";
	cin>>opcao;
	if(opcao==1){
		cout<<"quantidade de km";
		cin>>km;
		cout<<"nº de litros";
		cin>>L;
		cout<<"consumo foi de :"<<L/km<<endl;
		system("pause");
		}
	if(opcao==2){
		cout<<"quantidade de litros:";
		cin>>L;
		cout<<"media de km p/ litro:";
		cin>>mdconsumo;
		cout<<"km percorridos:"<<L*mdconsumo<<endl;
		system("pause");
		}
	
			}while(opcao<3);
	system("pause");
	return(0);

	}
