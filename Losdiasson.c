#include <stdio.h>
int dia1;
int mes1;
int diafin;
int mesfin;
int i=30;
int main()
{
	printf("programa que calcula cuantos dias son de un mes a otro\n\n");
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
	 	i=i+30;
 	
	 }
 	
	 	
		{
			printf("los dias son %d\n",i);
		}
	
	
	
	
}
