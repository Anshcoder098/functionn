#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b: ");
	scanf("%d%d",&a,&b);
	int c=(a>b)?b:a;
	printf("%d is smallest num",c);
	return 0;
}
