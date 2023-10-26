#include<stdio.h>

int main()
{
	int n,i,j,a[10];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			
			{
				int s=a[i];
				
				a[i]=a[j];
				a[j]=s;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	
}
