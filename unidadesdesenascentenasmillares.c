#include<stdio.h>
int n,uni,dec,dec2,cent,cent2,mil,mil2;

int main()
{
	printf("Programa que separa un numero de cuatro digitos\n");
	scanf("%d",&n);
	
	if ((n>=1000) && (n<=9999))
	{
		uni=n % 10;
		dec= n/10;
		dec2= int (dec%10);
		cent= n/100;
		cent2= int (cent%10);
		mil= n/1000;
		mil2= int (mil%10);
		printf("Las unidades son:\n%d",uni);
		printf("\nlas decenas son:\n%d",dec2);
		printf("\nlas centenas son:\n%d",cent2);
		printf("\nlas millares son:\n%d",mil2);
		
	}
	
	else 
	{
		printf("Este numero no es de cuatro digitos");
	}
	
return 0;	
}
