#include<stdio.h>

int fun(int i,chat str[13])
{
	if(str[i]=='\0')
	
	{
		return 0;
	}
	
	int l=fun(i+1);
	
	return l+1;
	
}
int main()
{
	char str[13]="I am a girl!";
	
	int i,j;
	
	i=0;
	
	int l=fun(int i);
	
	printf("Length %d:\n",l);
}
