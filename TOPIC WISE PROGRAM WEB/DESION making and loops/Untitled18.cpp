#include <stdio.h>
int main()
{
	int i,j,k,s,n;
	printf("enter a no");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(s=1; s<=n-i; s++)
		{
			printf(" ");  
			 
		}
		k=i;  //store i value in k to print numbers
		
		for(j=1; j<=i; j++)
		{
			printf("%d",k++);
		
		}
			k=k-2;
		
		for(j=1; j<i; j++)
		{
			printf("%d",k--);
		}
			printf("\n");
	}
	

}
