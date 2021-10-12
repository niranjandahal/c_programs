//wap to coubt no of digit in a given no

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b=0;
	printf("enter a number");
	scanf("%d",&a);

    while (a!=0)
    {
    	a=a/10;
    	++b;
	}
	printf("the no of digit is %d",b);

}
