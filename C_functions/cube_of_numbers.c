#include<stdio.h>

int cube(int num);
void main()
{
	int num;
	printf("enter a cube of numbers: ");
	scanf("%d",&num);
	printf("cube ofa given number is %d\n",cube(num));
}
int cube(int num)
{
	return num*num*num;
}
