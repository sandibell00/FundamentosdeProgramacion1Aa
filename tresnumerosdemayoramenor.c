#include <stdio.h>
int main()
{ 	int n1,n2,n3;
	printf("programa que ordena tres numeros de mayor a menor\n");
	printf("dame el primer numero\n");
	scanf("%d",&n1);
	printf("Dame el segundo numero\n");
	scanf("%d",&n2);
	printf("Dame el tercer numero\n");
	scanf("%d",&n3);
	if ((n1>=n2) && (n1>=n3) && (n2>=3))
{	printf("El orden es:%d",n1);
	printf("%d,n2");
	printf("%d,n3");
}	else if ((n1>=n2) && (n1>=n3) && (n3>=n2))
{	printf("El orden es:%d",n1);
	printf("%d",n3);
	printf("%d",n2);
}	else if((n2>=n1) && (n2>=n3) && (n1>=n3))
{	printf("El orden es:%d",n2);
	printf("%d",n1);
	printf("%d",n3);
}	else if ((n2>=n1) && (n2>=n3) && (n3>=n1))
{	printf("El orden es:%d",n2);
	printf("%d",n3);
	printf("%d",n1);
}	else if ((n3>=n1)&& (n3>=n2) && (n1>=n2))
{	printf("El orden es:%d",n3);
	printf("%d",n1);
	printf("%d",n2);
}	else if ((n3>=n1) && (n3>=n2) && (n2>=n1))
{	printf("El orden es:%d",n3);
	printf("%d",n2);
	printf("%d",n1);
}	else printf("");
	
	return 0;

}










	
