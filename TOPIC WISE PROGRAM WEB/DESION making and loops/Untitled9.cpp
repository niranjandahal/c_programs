
//wap to find graetest common divisor
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,gcd;
	printf("enter two integer");
	scanf("%d %d",&a,&b);
	
	for (c=1; c<=a && c<=b; c++)
	{
		if(a%c==0 && b%c==0)
		gcd=c;
    }
    printf("the gcd of %d and %d is = %d",a,b,gcd);
    	
}
