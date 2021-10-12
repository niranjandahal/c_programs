
#include <stdio.h>
int main ()
{
		int i,j,n;
	printf("enter a no upto which table to print");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n; j++)
		{
	     	printf("%dx%d=%d\n",i,j,i*j);
		}
    	printf("\n\n");
    }
}


