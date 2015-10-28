/*'Programa para saber si aprobaste la materia' */
#include<stdio.h>//Libreria de E/S
int calificacion;
int main()
{
	printf("Programa para saber si aprobaste la materia\n");
	printf("ingresa tu calificacion\n");
	scanf("%d",&calificacion);
	if(calificacion>=7)
	{
		printf("Aprobaste");
	}
	else
		{
		printf("Reprobaste");
		}
}
