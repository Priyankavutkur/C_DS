#include<stdio.h>
#include<stdlib.h>
int sum(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int divi(int x,int y);
int exitt();
void main()
{
	int x,y,ch;
	while(1)
	{
		printf("enter your choise\n");
		scanf("%d",&ch);
		printf("Enter 2 numbers\n");
		scanf("%d%d",&x,&y);
		switch(ch)
		{
			case 1:
				printf("Sum of two numbers :  ");
				printf("%d\n",sum(x,y));
				break;
			case 2:
				printf("Substraction of two numbers\n");
				printf("%d\n",sub(x,y));
				break;
			case 3:
				printf("Mult of two numbers\n");
				printf("%d\n",mul(x,y));
				break;
			case 4:
				printf("Division of two numbers");
				while(y==0)
				{
					printf("Enter y greater then 0\n");
					scanf("%d",&y);
				}
				printf("%d\n",divi(x,y));
				break;
			case 5:
				exitt ();



		}

	}
}
int sum(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int divi(int x,int y)
{
	return x/y;

}
int exitt()
{
	return 0;
}



