#include<stdio.h>//matriz
int matriz[3][3];
int i;
int j; 
int main()
{
	printf("Programa de una matriz de 3x3\n");
	printf("Ingresa valores para la matriz\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Matriz [%d , %d] :",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
}
