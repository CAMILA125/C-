#include<iostream>
using namespace std;
int opcao, quantidade, produto;
float soma,valor;
int main(){
	soma=0;
	
	do{
		system("cls");
		cout<<"menu de opcoes"<<endl;
		cout<<"1- comprar produtos"<<endl;
		cout<<"2- finalizar venda"<<endl;
		cout<<"3- sair"<<endl;
		cout<<"opcao"<<endl;
		cin>>opcao;
			if (opcao==1){
				cout<<"codigo do produto ";
				cin>>produto;
				cout<<"quantidade ";
				cin>>quantidade;
					if(produto==1) soma=soma+5*quantidade;
					if(produto==2) soma=soma+12*quantidade;
					if(produto==3) soma=soma+15*quantidade;
					if(produto==4) soma=soma+4*quantidade;
					if(produto==5) soma=soma+4*quantidade;
					if(produto==6) soma=soma+3*quantidade;
			}
			if(opcao==2){
				cout<<"total da venda:"<<soma<<endl;
				cout<<"valor R$ ";
				cin>>valor;
				cout<<"troco R$ "<<valor-soma<<endl;
				soma=0;
				system("pause");				
			}
		}while(opcao<3);
		return(0);
}
