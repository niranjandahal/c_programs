#include <stdio.h>


void sort(int b[100],int num)
{
	int i,j,temp; //vvi vvi vvi here n is also imported check it out
	printf("the array in assending order is ");
	for(i=0; i<(num); i++)                            // here n value is used from another function vvi point
	{
		for(j=i+1; j<num; j++)
		{
			if (b[i]>b[j])
			{
				temp = b[i];
				b[i]=b[j];
				b[j]=temp;
				
			}
			
		}
		printf("%d",b[i]);
	}
	
	
}



int main()
{
	
	
	int n,a[100];
	printf("\nEnter the number of an element of an array");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("enter the %d value",i);
		scanf("%d",&a[i]);	
	}
   
   sort(a,n); //calling sort function to do something with array a and n also bacause there is use of an n	
}



