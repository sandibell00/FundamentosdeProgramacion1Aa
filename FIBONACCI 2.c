#include <stdio.h>//SERIE DE FIBONACCI
int f1=1,f2,N;
int main()
{ 
	printf(" Programa que utiliza la serie de fibonacci\n\n");
	printf("\nDame un valor para N: \n");
	scanf("%d", &N);
	
	f2=f1; 
	if (f1<N)
	

	while(f1<N)
	{
		f2=f2+f1;
		f1=f2-f1-1;
		printf("\n ,%d", f1);
	}
	
	else if (f1>=N)

	{
		printf("\n\nCON ESTE NUMERO NO SE PUEDE HACER UNA SECUENCIA :(\n");
	}

}

