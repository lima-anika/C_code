#include<stdio.h>

void print(int n)
{
	if(n==0)
	{
		return;
	}
	
	else
	{
		printf("I love Recursion\n");
		
		n--;
		
		print(n);
		
		
	}

}

int main()

{
	int n;
	
	scanf("%d",&n);
	
	print(n);
	
	
}
