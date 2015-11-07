#include <stdio.h>
int main() 
{	int n1;
	int n2;
	
	printf("Dame el primer numero: ");
	scanf("%d",&n1);
	printf("Dame el segundo numero: ");
	scanf("%d",&n2);
	
	if(n1<n2)
	{
		for(;n1<=n2;n1++)
		{
			
		printf("\n es :%d\n",n1);
			
			
		}
		
	}	else
	
	{
		
		for(;n1>=n2;n1--)
		{
			
		printf("\n es :%d\n",n1);
			
		}		
		
	}
	
	return 0;
}
