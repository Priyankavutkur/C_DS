#include<stdio.h>
#define size 10
void main()
{
	int arr[size],i;
	printf("enter array elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

