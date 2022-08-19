#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int);

int main(){
	int numero;
	cout<<"Ingrese un numero: "; cin>>numero;
	cout<<factorial(numero)<<endl;
}

int factorial(int n){
	if(n==0){
		n=1;
	}
	else{
		n=n*factorial(n-1); /*Aqu� la funci�n se est� llamando dentro de ella, es por eso que
		es recursiva.*/
	}
	return n;
}
