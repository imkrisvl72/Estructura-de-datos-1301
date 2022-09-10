#include <stdio.h>
#include <stdlib.h>

int numC[9];
int numP[10];

int a, b, numD = 0;

int pares();
int mod();
int imp();

int main()
{
    printf("\n Teclea tu numero de cuenta dando enter entre cada uno de los digitos:\n");
	for(a=0; a<9; a++)
	{
	    scanf("%d", &numC[a]);
	}
    pares();
    mod();
    imp();
    return 0;
}

pares()
{
    printf("\n Pares:\n");
    for(a=0; a<10; a++)
    {
        numD = numD + 2;
        numP[a] = numD;
        printf("%d ", numP[a]);
    }
    
}

mod()
{
    printf("\n Modificacion \n");
    printf("%d ", numC[8]);
    b = numC[8];
    numP[b] = -1;
    printf("%d ", b);
    
}

imp()
{
    printf("\n Impresion \n");
    for(a=0; a<10; a++)
    {
        printf("| %d ", numP[a]);
    }
    printf("| \n");
    
}
