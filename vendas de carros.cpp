#include<iostream>
using namespace std;
int nvv;
float sm, vtv;
int main(){
	cout<<"salario minimo: ";
	cin>>sm;
	cout<<"numero de carros vendidos: ";
	cin>>nvv;
	cout<<"valor total de vendas R$: ";
	cin>>vtv;
	cout<<"salario final eh: "<<(2*sm)+(100*nvv)+(vtv*0.01)<<" R$"<<endl;
	system("pause");
	return(0);
	
}
