#include<stdio.h>

int main()
{
	int a[10],i,n,j,k=0,x;
	
	scanf("%d",&n);
	
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==x)
			{
				printf("Sum is %d\n",x);
				k=1;
			}
		}
	}
	
	if (k==0)
	{
		printf("Sum not found!\n");
	}
}
