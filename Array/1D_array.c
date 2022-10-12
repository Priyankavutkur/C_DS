#include<stdio.h>
#define size 10
void main()
{
	int i,size1;
	scanf("%d",&size1);
	int arr[size1];
	printf("enter array elements");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size1;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

