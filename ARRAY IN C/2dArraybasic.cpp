#include <stdio.h>
main()
{
	int a[3][3];
	int i,j;
	//input 2d array
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("enter the value of data");
			scanf("%d",&a[i][j]);
		}
	}
     
     //outer loop
     printf("the output matrix is ");
     
     for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d",a[i][j]);
			
		}
	}
    return 0; 
}
