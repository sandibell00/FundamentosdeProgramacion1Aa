#include<stdio.h> 
int arreglo[10]; 
int mediana;
int MitadArreglo; 
int i; 
int main() 
{ 
	printf("Programa que calcula la mediana utilizando un arreglo de 10 numeros\n"); 
	for(i=0;i<10;i++) 
 { 
 
    printf("Dame un numero: "); 
    scanf("%d", &arreglo [i]); 
    
 } 
 	mediana=(arreglo[4]+arreglo[5])/2; 
	printf("La mediana es: %d", mediana);
 
 	

 	return 0; 
 } 
  
