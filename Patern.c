#include<stdio.h>

main() {
	
	int star,space,n,p,i,j,k;
	
	scanf("%d",&n);
	
	star=1,space=n-1;
	
	p=(2*n)-1;
	
	for( i=1;i<=p;i++)
	{
		if(i<=n-1)
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
		
		else
		
		{
			space+=1;
			star-=2;
			
			for(j=1;j<=space;j++)
			{
				printf(" ");
			}
			
			for(j=1;j<=star;j++)
			{
				printf("*");
			}
			
		}
		
		printf("\n");
	}
	
}
