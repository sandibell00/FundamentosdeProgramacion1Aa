#include<stdio.h>
int MatrizA[3][3];
i=0;
j=0;
MatrizB[3];
MatrizC[3];
int main()
{
	printf("Dame los valores para la matriz de 3x3\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Matriz  [%d , %d] :",i,j);
			scanf("%d",&MatrizA[i][j]);
		}
	}
	printf("Dame los valores del vector\n\n");
	for(i=0;i<3;i++)
	{
			scanf("%d",&MatrizB[i]);
	}
	
	printf("  \nLa matriz que vas a multiplicar quedaria  asi :  \n");
	for(i=0;i<3;i++)
	
	{
		
		for(j=0;j<3;j++)
		{
			printf("%d ",MatrizA[i][j]);
		}
		printf("\n");

}

}
