#include <stdio.h>
	int distancia;
	int avance;
	int baj;
	int sub=3;
	int dias=0;
	int main()
{
	printf("Programa que calcula la distancia del oyo\n\n");
	printf("Dame la profundidad del oyo\n");
	scanf("%d", &distancia);
	printf("Da los dias que a recorrido en la noche\n\n");
	scanf("%d", &avance);
	printf("Da los dias que recorrio en la noche\n");
	scanf("%d", &baj);
	if(baj>=avance){
		printf("y el cangrejito nunca podra salir :(");
	}else
	{
		while(sub<=distancia)
		{
		 
		 sub=sub+avance-baj;
		 dias=dias+1;
		}
		printf("los dias que tardara son %d ",dias);
		
	}
}

