#include<stdio.h>

int print_n(int n,int i)
{
	if(i==n)
	{
		return i;
	}
	
	else
	{
		i++;
		int n1=print_n(n,i);
		printf("%d ",n1);
		n1--;
		return n1;
		
	}
}

int main()
{
	int n,i=1;
	
	scanf("%d",&n);
	int n1=print_n(n,i);
	
	printf("%d\n",n1);
	
}

