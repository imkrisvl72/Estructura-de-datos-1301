#include <stdio.h> 
#include <stdlib.h>

struct alumnos
{
	char nombre[25];
	int edad;
	int calificacion;
} datos[100];

int promedioEdad();
int promedioCalif();
int nombresOrden();

int Pedad;
int Pcalif;
int x;
int y;

int main()
{
	printf(" ¿Cuantos alunmos qieres registrar? \n ");
	scanf("%d", &y);
	for (x=0; x<y; x++)
	{
		printf("\n Registra el nombre del alumno %d: ", x+1);
		scanf("%s", &datos[x].nombre);
		printf("\n Registra la edad de %s: ", datos[x].nombre);
		scanf("%d", &datos[x].edad);
		printf("\n Registra la calificacion de %s: ", datos[x].nombre);
		scanf("%d", &datos[x].calificacion);
	}
	
	
	printf("\n");
	Promedad();
    printf("\n");
	Promcalif();
    printf("\n");
    nomo();
	return 0;
}

Promedad()
{
	int sumaS=0;
	for (x=0; x<y; x++)
	{
		sumaS=sumaS+datos[x].edad;
	}
	Pedad = sumaS/y;
	printf("\n Promedio de edad grupal: %d", Pedad);
}

Promcalif()
{
	int sumaK=0;
	for (x=0; x<y; x++)
	{
		sumaK=sumaK+datos[x].calificacion;
	}
	Pcalif=sumaK/y;
	printf("\n Promedio de calificacion grupal: %d", Pcalif);
}

nomo()
{
    printf("\n Lista de nombres en sentido inverso");
    for (x=y; x>=0; x--)
    {
        printf("%s \n", datos[x].nombre);
    }
}
