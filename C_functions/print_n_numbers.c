#include<stdio.h>
void num_print(int num);

void main()
{
	int num,i;
	printf("Enter a number : ");
	scanf("%d",&num);
	num_print(num);
	printf("\n");
}
void num_print(int num)
{
	if(num==0)
	{
		printf("%d ",num);
	}
	else
	{
		num_print(num-1);
		printf("%d ",num);
	}	
	
}








