#include<stdio.h>
int i;
int n1;
int n2;
int res;
int main()
{
	printf("Programa que realiza una multiplicacion\n");
	printf("Dame el primer numero\n");
	scanf("%d",&n1);
	printf("Dame el segundo numero: \n");
	scanf("%d",&n2);
	res=n1*n2;
	do{	n2=n2;
		printf("+%d",n2);
		n1=n1+n2;	}
		while (n1<=res);
	
	do	{i=res;
		printf("  =%d",i);
		i=i+res;}
		while (i<=res);
}

