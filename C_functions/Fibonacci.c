#include<stdio.h>
int fab(int num);
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("%d\n",fab(num));
}
int fab(int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	return (fab(num-1)+fab(num-2));
}

