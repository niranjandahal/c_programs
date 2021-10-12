#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the dividend");
	scanf("%d",&a);
	printf("enter the divisor");
	scanf("%d",&b);
	c=a/b;
	d=a%b;
	printf("the quiotient is %d",c);
	printf("\n\tthe remainder is %d",d);
	return 0;

