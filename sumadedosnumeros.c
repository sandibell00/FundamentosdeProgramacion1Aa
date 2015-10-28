#include<stdio.h>//Libreria de E/S
int resultado;
int N1;
int N2;
int main ()
{
	printf("Dame un numero: ");
	scanf("%d",&N1);
	printf("Dame otro numero: ");
	scanf("%d",&N2);
	resultado=N1+N2;
	printf("El resultado es: %d",resultado);
}
