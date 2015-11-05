#include<stdio.h>
int n1=1,n2=1,j;
int main()
{	printf("Dame un numero: ");
	scanf("%d",&j);
	while(n1<=j)
	{ if(n1%2==0)
	{ while(n2<=n1)
	{ printf("%d", n1);
	n2=n2+1; } }
	else
	{ printf("%d\n", n1);}
	n1=n1+1;
	n2=1; 
	} 
	return 0;
}
