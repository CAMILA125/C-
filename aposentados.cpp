#include<iostream>
using namespace std;
int ano, ingresso, idade, tempo;
int main(){
	cout<<"ano de nacimento: ";
	cin>>ano;
	cout<<"quando ingressou? ";
	cin>>ingresso;
	cout<<"sua idade he: "<<(idade=2018-ano)<<endl;
	cout<<"voce trabalhou "<<(tempo=2018-ingresso)<<" anos"<<endl;
	
	if(idade>=65)
	cout<<"apto para aposentadoria"<<endl;
	else if(tempo>=30)
	cout<<"apto para aposentadoria"<<endl;
	else if((idade>=60)&&(tempo>=25))
	cout<<"apto para aposentadoria"<<endl;
	else cout<<"inapto para aposentadoria"<<endl;
	
	system("pause");
	return(0);
}
