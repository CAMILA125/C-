#include<iostream> // definir a biblioteca 
using namespace std;  // comandos de entrada e saida 

int a, b, c, aux;
int main () {
	
	cout<<"1� valor " ;
	cin>>a;
	
	cout<<"2� valor ";
	cin>>b;
	
	cout<<"3� valor";
	cin>>c;
	
	if (a>b) {
	aux=a;
	a=b;
	b=aux;
	}
	
	if (a>c) {
	aux=a;
	a=c;
	c=aux;
	}
   
    if (b>c) {
    aux=b;
	b=c;
	c=aux;
	}
	cout<<"valores ordenados: " <<a<<", "<<b<<" e "<<c<<endl;
	system("pause");
	return(0);
}

