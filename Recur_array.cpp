#include<stdio.h>

long long sum(long long *a,long long n,long long i)

{
	i++;
	
	long long s=0;
	
	if(i==n)
	{
		return i;
	}
	
	long long a11=sum(a,n,i);
	
	s+=a[a11];
	
	return a11-1;
	
}

int main()
{
	long long a[1009],i,n,i1;
	
	scanf("%lld",&n);
	
	i=0;
	
	for(i1=0;i1<n;i1++)
	
	{
		scanf("%lld",&a[i1]);
	
	}
	long long s=sum(a,n,i);
	
	
	
	printf("%lld\n",s);
}
