#include <stdio.h>
main()
{
	int a[100];
	int i,j,n,temp;
	printf("enter t he no of elemrnt in an array");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("enter the data");
		scanf("%d",&a[i]);
	}
	
	//sorting of an array process
	for(i=0; i<n; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
		
	}
	//output part
	printf("\n the sorted array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
	
}

