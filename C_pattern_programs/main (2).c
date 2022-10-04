#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=i;i<=5;i++)
    {
        for(j=1;j<=2*(5-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
            
        printf("\n");
        
    }
}
