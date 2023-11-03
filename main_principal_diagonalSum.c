#include<stdio.h>

int main()

{
	int n,a[109][109],s1=0,s2=0,i,j;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		
		{
			if(i==j)
		
		{
			s1+=a[i][j];
			
		}
		
		 if((i+j)==(n-1))
		
		{
			s2+=a[i][j];
		}
		}
	
	}

if(s1-s2<0)
{
	printf("%d\n",(s1-s2)*(-1));
}

else
{
	printf("%d\n",(s1-s2));
}
	
	
}
