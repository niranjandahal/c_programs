#include <stdio.h>
#include <string.h>
struct nd
{
	char name[50];
	int roll;
	int per;
} tsr[100], temp;

int main()
{
	int n;
	printf("\nenter the no of student to store details");
	scanf("%d", &n);
	//input infromation
	for (int i = 0; i < n; i++)
	{
		printf("\nenter the name of the %d students", i + 1);
		scanf("%s", &tsr[i].name);
		printf("\nenter the roll no");
		scanf("%d", &tsr[i].roll);
		printf("\nenter the percentage");
		scanf("%d", &tsr[i].per);
		printf("\n\n");
	}
	//displaying in sorted order of percentage
	for (int i = 1; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (tsr[j].per > tsr[j+1].per)
			{
				temp=tsr[j];
				tsr[j]=tsr[j+1];
			    tsr[j+1]=temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%s\n%d\n%d\n",tsr[i].name,tsr[i].roll,tsr[i].per);
	}
	
}