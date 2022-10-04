#include<stdio.h>
int main(void)
{ 
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    n--;
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=n+1-i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
  
}
