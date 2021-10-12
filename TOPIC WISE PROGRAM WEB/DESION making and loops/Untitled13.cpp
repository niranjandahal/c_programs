//wap to dispaly factor of agiven no
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int n,i;
	
	printf("ente the no");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		if(n%i==0)
		printf("%d,",i);
	}
	printf("are the factor of a number %d",n);
	return 0;
}
