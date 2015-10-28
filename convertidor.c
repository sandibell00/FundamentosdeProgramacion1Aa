#include<stdio.h>
  float meg, gig, ter, val;
  float bt, byte;
    int main()
  {//Inicio main
  printf("Dame una cantidad a convertir  ");
  scanf("%f", &meg);
  val= 1024;
   bt=(float)meg*val*val*8;
   byte=(float) meg*val*val;
   gig=(float)meg/val;
   ter=(float)meg/val/val;
  printf("El resultado en bits es: %f\n", bt);
  printf("El resultado en bytes es: %f \n", byte);
  printf("El resultado en Gigabytes es: %f \n", gig);
  printf("El resultado en bits es: %f \n", ter);
  
  
  return 0;
  }
