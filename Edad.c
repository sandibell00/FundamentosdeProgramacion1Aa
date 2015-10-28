/*'Programa que te dice en que etapa de tu edad estas */
#include<stdio.h>//Libreria de E/S
int edad;
int main()
{
	printf("Programa que te dice en que etapa de tu edad estas\n");
	printf("Escribe tu edad\n");
	scanf("%d",&edad);
	if (edad>=0&edad<=12)
	{
		printf("Eres niño");
	}
	else
		if(edad>=13&edad<=18)
		{
		printf("Eres adolescente");
		}
		else
			if(edad>=19&edad<=29)
			{
			printf("Eres un joven");
			}
			else
				if(edad>=30&edad<=59)
				{
					printf("Eres adulto");
				}
				else
					{
						printf("Eres adulto mayor");
					}
}
