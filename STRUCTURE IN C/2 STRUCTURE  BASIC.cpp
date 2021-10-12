#include <stdio.h>
struct nd
{
	char name[50];
	int roll;
	int per;
}tsr[100];

int main()
{
	int n,i;
	printf("\nenter the no of student to store details");
	scanf("%d",&n);
	//input infromation
	for ( i = 0; i < n; i++)
	{
		printf("\nenter the name of the %d students",i+1);
		scanf("%s",&tsr[i].name);
		printf("\nenter the roll no");
		scanf("%d",&tsr[i].roll);
		printf("\nenter the percentage");
		scanf("%d",&tsr[i].per);
		printf("\n\n");
	}
	
	//display the information
	for ( i = 0; i < n; i++)
	{
		printf("\nthe name of %d students is %s",i+1,tsr[i].name);
		printf("\nTHe roll no is %d",tsr[i].roll);
		printf("\nthe percentage is %d",tsr[i].per);
		printf("\n\n");
	}
	
return 0;
}
