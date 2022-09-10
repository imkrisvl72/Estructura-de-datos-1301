#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int *numC = (int*)malloc(9 * sizeof(int));
	int x, y;
	printf("Teclea tu numero de cuenta dando enter entre cada uno de los digitos:\n");
	for(x=0; x<9; x++)
	{
	
		scanf("%d", &numC[x]);
	}
	

	
	for(x=0; x<9; x++)
	{
		for (y=0; y<numC[x]; y++)
		{
			printf("| %d ", numC[x]);
		}
		printf("|\n");
	}
	return 0;
}
