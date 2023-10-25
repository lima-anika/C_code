/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
    
    int n,k,star=1;
    
    scanf("%d",&n);
    
    int space=n-1;
    
    k=n;
    
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=space;k++)
        {
            
            printf(" ");
        }
        
        
        for(int k=1;k<=star;k++)
        {
            printf("*");
        }
        
        star+=2;
        
        space-=1;
         printf("\n");
    }

    return 0;
}
