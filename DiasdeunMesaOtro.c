#include <stdio.h> 
int dia1;
int mes1;
int diafin;
int mesfin;
int i;
int diat;
int main()
{
	printf("programa que calcula cuantos dias son de un mes a otro\n");
	printf("\nDonde el año como es comun tiene 12 meses y en esta ocasion cada mes tiene 30 dias\n\n");
	printf("Ingrese el mes:\n");
	scanf("%d", &mes1);
	printf("Ingrese el dia:\n");
	scanf("%d", &dia1);
	printf("Ingrese el mes final:\n");
	scanf("%d", &mesfin);
	printf("Ingrese el dia final:\n");
	scanf("%d", &diafin);
	
	for(i=mes1; i<=mesfin; i++)
	
	{
		diat=diat+30;
	}
	
	diat=diat-dia1-(30-diafin);
	
		{
			printf("los dias que has pedido del mes inicial al mes final son: %d\n",diat);
		}
}

