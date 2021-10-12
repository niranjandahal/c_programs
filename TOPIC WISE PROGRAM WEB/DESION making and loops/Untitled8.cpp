//wap to fibonaci series wrong program
#include <stdio.h>
#include <math.h>
int main()
{
	int n,a=0,b,c,i;
	printf("enter the no of term to fibaonaci series");
	scanf("%d",&n);
	
	for (i=0; i<=n; i++)
	{
	b=i;
	a=a+b;
	printf("the series %d\n",a);
    }
}
