#include <stdio.h>
int main()
{	
	int num,k,may,men;
	printf("Programa que encuentra el numero mayor y menor\n");
	printf("Introduce 10 numeros\n");
	for(k=1;k<=10;k++)
	{
	scanf("%d",&num);
	if(num>may)may=num;
	if(num<men)men=num;
}
	printf("\n  %d    %d",may,men);
return 0;
	}
