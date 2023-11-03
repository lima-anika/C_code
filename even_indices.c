#include<stdio.h>

long long arp(long long a[1007],long long i,long long n)

{
	if(i==n)
	{
		return i;
	}
	else
	{
		i++;
		printf("\n ind\n %lld",i);
		long long ind=arp(a,i,n);
		
		printf("\n ind\n %lld",ind);
		
		if(ind%2==0)
		{
			printf("%lld ",a[ind]);
		}
		
		return ind-1;
	}
}

int main()
{
	long long n,i=1;
	
	long long a[1008];
	
	scanf("%lld",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	
	int ind=arp(a,i,n);
	
	printf("%lld",a[ind]);
}
