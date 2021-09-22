#include<iostream>
using namespace std;
int opcao;
float salario, INSS, ferias, aumento;
int main (){
	do{
		system("cls");
	cout<<"menu de opçoes:"<<endl;
	cout<<"1-novo salario"<<endl;
	cout<<"2-INSS"<<endl;
	cout<<"3-ferias"<<endl;
	cout<<"4-aumento"<<endl;
	cout<<"5-sair"<<endl;
	cout<<"opcao:";
	cin>>opcao;
	if(opcao==1){
		cout<<"salario:";
		cin>>salario;
		if(salario<=1200) salario=salario*1.04;
		if((salario>1200)&&(salario<=2500))
		salario=salario*1.032;
		if(salario>2500) salario=salario*1.028;
		cout<<"novo salario:"<<salario<<endl;
		system("pause");
		}
	if(opcao==2){
		cout<<"salario:";
		cin>>salario;
		INSS= salario*0.08;
		cout<<"INSS:"<<INSS<<endl;
		system("pause");
		}
	if(opcao==3){
		cout<<"salario:";
		cin>>salario;
		ferias=salario*1.333;
		cout<<"ferias:"<<ferias<<endl;
		system("pause");
		}
	if(opcao==4){
		cout<<"salario:";
		cin>>salario;
		if(salario<=1200) aumento=salario*0.04;
		if((salario>1200)&&(salario<=2500))
		aumento=salario*0.032;
		if(salario>2500) aumento=salario*0.028;
		cout<<"aumento de :"<<aumento<<endl;
		system("pause");
		}
	}while(opcao<5);
	system("pause");
	return(0);
	

	
}
