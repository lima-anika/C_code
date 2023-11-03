#include<stdio.h>

int main()
{
	int n,i,j,k;
	
	scanf("%d",&n);
	
	int star=1,space=n-1;
	
	for(i=1;i<2*n;i++)
	{
		if(i<=n)
		{
			for(j=1;j<=space;j++)
			{
				printf(" ");
			}
			
			for(j=1;j<=star;j++)
			{
				printf("*");
			}
			
			space-=1;
			
			star+=2;
		}
		
		printf("\n");
		
		
		if(i>=n)
		
		{
			if (i==n)
			{
				star=2*n-1;
				
				space=0;
			}
			
			for(j=1;j<=space;j++)
			{
				printf(" ");
			}
			
			for(j=1;j<=star;j++)
			{
				printf("*");
			}
			
			star-=2;
			space+=1;
				
		}
	}
	return 0;
}
