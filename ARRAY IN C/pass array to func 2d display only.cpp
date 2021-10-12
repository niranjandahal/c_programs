#include <stdio.h>

void display(int b[2][2]);  // saying to program that there is one display function below

int main()
{
	int a[2][2];
	printf("\nenter the elemnt of and 2*2 array");
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			printf("\nenter the %d row %d column element",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	display(a); //calling of a function display to work
	return 0;
	
}



void display(int b[2][2]) //making function display and taking input and store in b array
{
	//going to print value using function
	for(int i=0; i<2; i++)
	{
		printf("\n"); // changing line after printing each element
		for(int j=0; j<2; j++)
		{
			printf("%d",&b[i][j]);
			printf("\t");             // space after each element in a concesutive row
		}
	}
	
}
