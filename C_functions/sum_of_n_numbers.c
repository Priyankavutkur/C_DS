#include<stdio.h>
int sum_of_n_numbers(int num);
void main()
{
	int num;
	printf("enter a Nth number to find the sum");
	scanf("%d",&num);
	printf("Sum is :%d\n ",sum_of_n_numbers(num));
}
int sum_of_n_numbers(int num)
{
	if(num==0)
	{
		return 0;
	}
	return (num+sum_of_n_numbers(num-1));
}

