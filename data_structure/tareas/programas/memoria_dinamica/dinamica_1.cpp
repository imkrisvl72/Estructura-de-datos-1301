#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int x, y, numG = 0;

void Paresg(int *, int *);
void mod(int *, int *);
void imp(int *, int *);

int main()
{
    int *cuenta = (int*)malloc(9 * sizeof(int));
    int *pares = (int*)malloc(10 * sizeof(int));
    printf("Teclea tu numero de cuenta dando enter entre cada uno de los digitos:\n");
	for(x=0; x<9; x++)
	{
	    scanf("%d", &cuenta[x]);
	}
    Paresg(cuenta, pares);
    mod(cuenta, pares);
    imp(cuenta, pares);
    return 0;
}
Paresg(int *cuenta,  int *pares)
{
    printf("Primeros 10 numeros pares \n");
    for(x=0; x<10; x++)
    {
        numG = numG + 2;
        pares[x] = numG;
        printf("%d \n", pares[x]);
    }
    
}

void mod(int *cuenta, int *pares)
{
    
    printf("%d\n  se colocara un -1 2n la posision", cuenta[8]);
    y = cuenta[8];
    pares[y] = -1;
    printf("%d\n ", y);
    
}

void imp(int *cuenta, int *pares)
{
 
    for(x=0; x<10; x++)
    {
        printf("| %d ", pares[x]);
    }
    printf("| \n");
   
}
