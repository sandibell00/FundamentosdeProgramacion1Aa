#include<stdio.h>
int main()
{	int n1;
	int i;
	int j;
	printf("ingrese un numero:");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		
		if(i%2==0)
		{
			
			printf("es:");
			for(j=1;j<=i;j++)
			{
				
				printf("%d",i);
				
				
				
			}         
			
		}else
		
		{        
			printf("\n");
			printf("es:%d",i);            
			printf("\n");
		}
	}
	
	return 0;
}
