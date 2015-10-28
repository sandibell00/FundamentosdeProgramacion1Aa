/*'Programa que calcula la propina' */
#include<stdio.h>//Libreria de E/S
float cuenta;
float propina;
float total;
int personas;
float resultado;
int main()
{
	printf("Este programa calcula la propina\n");
	printf("Ingresa la cuenta: ");
	scanf("%f",&cuenta);
	propina=cuenta*0.10;
	printf("El resultado de la propina es: %f\n",propina);
	total=cuenta+propina;
	printf("El resultado del total es: %f\n",total);
	printf("¿Con cuantas personas fuiste a comer?\n");
	scanf("%d",&personas);
	resultado=total/personas;
	printf("El resultado total es: %f\n",resultado);
	
	
}

