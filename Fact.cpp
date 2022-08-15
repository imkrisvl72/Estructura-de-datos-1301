#include <stdio.h>

int Factorial(int n) {
	if(n>1) {
		return n * Factorial(n-1);
	}else{
		return n;
	}
}

int main(){
	int val=4;
	int val2;
	
	printf("El factorial de %d es: ", val);
	val2= Factorial(val);
	printf("%d", val2);
}
