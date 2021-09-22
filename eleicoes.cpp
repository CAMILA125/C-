#include<iostream>
using namespace std;
int opcao1, opcao2, opcao3, opcao4, voto;
float nv;
int main (){
	opcao1=0; opcao2=0; opcao3=0; opcao4=0;
	do{
		cout<<"como voce vota?";
		cin>>voto;
		if(voto==1) opcao1=opcao1+1;
		if(voto==2) opcao2=opcao2+1;
		if(voto==3) opcao3=opcao3+1;
		if(voto==4) opcao4=opcao4+1;
	}while (voto!=0);
	
	cout<<"candidato ABC: "<<opcao1<<endl;
	cout<<"candidato DEF: "<<opcao2<<endl;
	cout<<"indeciso: "<<opcao3<<endl;
	cout<<"branco ou nulo: "<<opcao4<<endl;
		
	nv= opcao1+opcao2+opcao3+opcao4;
	cout<<"% votos ABC: "<<(opcao1/nv)*100<<endl;
	cout<<"% votos DEF: "<<(opcao2/nv)*100<<endl;
	cout<<"% votos indeciso: "<<(opcao3/nv)*100<<endl;
	cout<<"% votos beanco: "<<(opcao4/nv)*100<<endl;
	
	if (opcao1>opcao2)
		cout<<"ABC vencera a eleicao."<<endl;
	if (opcao2>opcao1)
		cout<<"DEF vencera a eleiçao."<<endl;
	if (opcao1==opcao2)
		cout<<"empate entre ABC e DEF."<<endl;
		
	system("pause");
	return(0);
}
