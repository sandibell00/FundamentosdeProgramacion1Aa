#include<stdio.h>
int arreglo [10];
int moda  [10];
float promedio;
int i;
int main()
{
	printf("Programa que realiza el promedio de calificaciones");
	for(i=0;i<10;i++)
	{
		printf("Calificacion a promediar: ");
		scanf("%d \n", &arreglo [i]);
		promedio=promedio+arreglo [i];
	}

	promedio=promedio/10;
	printf("El promedio es: %f", prom);

	for(i=0;i<19;i++)
	{
		moda[i]=0;
		moda[arreglo[i]-1]++;
	}
	return 0;
}

