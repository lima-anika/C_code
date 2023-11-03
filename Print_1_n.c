#include<stdio.h>

int print(int n,int i)
{
	if(i==n)
	{
		return 0;
	}
	
	i++;
	int a=print(n,i);
	
	a++;
	
	printf("%d\n",a);
	
	return a;
	
}

int main()

{
	int n,i=1;
	
	scanf("%d",&n);
	
	int a=print(n,i);
	
	printf("%d\n",a+1);
}
