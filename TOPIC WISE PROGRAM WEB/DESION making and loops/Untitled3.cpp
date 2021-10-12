#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,x,y;
	printf("enter the coffiecent of a b c");
	scanf("%d%d%d",&a,&b,&c);
	x=((-b/2*a)+sqrt(b*b-4*a*c)/2*a);
	y=((-b/2*a)-sqrt(b*b-4*a*c)/2*a);
	
	printf("the 1st value of the quardratic eqn is %d",x);
	printf("\nthe 2nd value of the quardratic eqn is %d",y);	
	
}
