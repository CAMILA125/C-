#include<iostream>
using namespace std;
int cont1, cont2, cont3, i, valor;
int main(){
	cont1=0;
	cont2=0;
	cont3=0;
	
	for(i=1;i<=20;i++){
    	cout<<"valor: ";
    	cin>>valor;
    	
    	if ((valor>=0)&&(valor<=50))cont1=cont1+1;
   		if ((valor>50)&&(valor<=100)) cont2=cont2+1;
   		if ((valor>100)&&(valor<=200)) cont3=cont3+1;
   	}
   	cout<<cont1<<" valores entre [0, 50]"<<endl;
	cout<<cont2<<" valores entre [50, 100]"<<endl;
	cout<<cont3<<" valores entre [100, 200]"<<endl;
	system("pause");
	return(0);
}
