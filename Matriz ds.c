#include<stdio.h>//matriz
int Mtriz[3][3];
int i;
int j;
int vectorC1;
int main()

{
	printf("Programa que multiplica una matriz de 3x3 por un numero\n");
	printf("Dame lo valores para la matriz\n");

	for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
	
		{
			printf("Valor  [%d , %d] :",i,j);
			scanf("%d", &Mtriz[i][j]);
		}
	}
	
	
		printf("\nDame el numero para multiplicar la matriz: ");
		scanf("   %d", &vectorC1);
		for(i=0;i<3;i++)
	{		
		
			printf("\nFila : ");
			for(j=0;j<3;j++)
		
			{
				Mtriz[i][j]=(Mtriz[i][j])*vectorC1;
				printf("%d ", Mtriz[i][j]);	} printf("\n||");

	}
	
	
}
