#include<stdio.h>
int power(int, int);
int power(int a, int b)
{
	int i,result=1;
	for(i=1;i<=b;i++)
	{
		result=result*a;
	}
	return result;
}
int main()
{
	int num,pow;
	printf("enter the number");
	scanf("%d",&num);
	printf("enter the power");
	scanf("%d",&pow);
	printf("the power is %d is %d",num,power(num,pow));
	return 0;
}
