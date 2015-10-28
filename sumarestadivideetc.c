/*Programa que suma, resta, multiplica y divide dos numeros */
#include<stdio.h>//Libreria de E/S
int suma;
int resta;
int multiplicacion;
float division;
float n1;
float n2;
int main ()
{
	printf("Este programa suma,resta,multiplica y divide dos numeros \n");
	printf("Dame un numero: ");
	scanf("%f",&n1);
	printf("Dame otro numero: ");
	scanf("%f",&n2);
	suma=n1+n2;
	printf("El resultado de la suma es: %d\n",suma);
	resta=n1-n2;
	printf("El resultado de la resta es: %d\n",resta);
	multiplicacion=n1*n2;
	printf("El resultado de la multiplicacion es: %d\n",multiplicacion);
	division=n1/n2;
	printf("El resultado de la division es: %f\n",division);
}
