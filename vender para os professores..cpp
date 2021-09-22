#include<iostream>
using namespace std;
int a, i, soma;
int main(){
	soma=0;
	for(i=1; i<=10;i++){
		cout<<"valor:";
		cin>>a;
		soma=soma+a;
	}
	cout<<"a meia eh"<<soma/10.0<<endl;
	system ("pause");
	return(0);
	
}
