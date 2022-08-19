#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int numero, factorial=1;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial = factorial * i; /*Aquí inicia el ciclo, es por ello que es iterativo.*/
	}
	
	cout<<"El factorial del numero es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}
