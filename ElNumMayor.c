#include <stdio.h>
int arreglo [10];
float promedio=0;
int i;
int moda [10];
int mayor;
int pmayor;
int main()
{
    printf("programa que promedia tu calificacion");
    for(i=0; i<10; i++)
{
    printf("Tu calificacion es : ");
    scanf("%d", &arreglo[i]);
    promedio=promedio+arreglo[i];
}
    promedio=promedio/10;
    printf("El promedio es : %f", promedio);
    for(i=0; i<10; i++)
{
    moda[i]=0;
}

for(i=0; i<10; i++)
    {
        moda[arreglo[i]-1]++;
    }
        mayor=0;
        for(i=0; i<10; i++)
{
    if (moda[i]>mayor)
    {
        mayor=moda[i];
        pmayor=i;
    }
}

{
    printf("La moda es %d", pmayor+1);


}

}

