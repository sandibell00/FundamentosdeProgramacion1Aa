#include<stdio.h>
int f1,f2=1,f3=1,n=1,i=4;
int main()
{ 
	printf(" Programa que utiliza la serie de fibonacci\n\n");
	printf("\nDame un valor para f1: \n");
	scanf("%d",&f1);
	if (f1>=1)
	{
	if (f1>=1)
	{
		printf("0");
		if (f1>=2)
		{
			printf(" 1");
			if (f1>=3)
			{
				printf(" 1");
			}
		}
		
	}
	while(i<=f1)
	{
		if (f1>=4)
		{
		n=f2+f3;
		f2=f3;
		f3=n;
		printf(" %d",f3);
		}
		i++;
	}
	}
	else 
		printf("\n\nCON ESTE NUMERO NO SE PUEDE HACER UNA SECUENCIA :(\n");
}


