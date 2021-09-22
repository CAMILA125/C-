#include<iostream>
using namespace std;
int valor, distribuidor, imposto;
int main( ){
	cout<<"valor de fabrica do veiculo"<<endl;
	cin>>valor;
	distribuidor=valor*0.28;
	imposto=valor*0.45;
	cout<<"custo do veiculo ao consumidor:"<<distribuidor+imposto+valor<<endl;
	system("pause");
	return(0);
}
