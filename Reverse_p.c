/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
    
    int n,k;
    
    scanf("%d",&n);
    
    k=n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=k;j>=1;j--)
        {
            printf("* ");
        }
        k--;
         printf("\n");
    }

    return 0;
}
