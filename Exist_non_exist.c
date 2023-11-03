#include<stdio.h>

int main()

{
	int row,column,a[160][170],i,j,x;
	
	scanf("%d %d",&row,&column);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	scanf("%d",&x);
	
	int f=0;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		
		{
			if(a[i][j]==x)
			{
				printf("will not take number\n");
				
				f=1;
				
				break;
			}
			
			
		}
		
		if(f==1)
			{
				break;
			}
	}
	
	if(f==0)
	
	{
		printf("will take number\n");
	}
	
	
}
