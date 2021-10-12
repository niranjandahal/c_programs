#include <stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3];     //c for matrix addition and d for the matrix multiplication
	int i,j,k;                              //k for matrix multiplication
	printf("enter the elemnt for matrix a");
	//input 3*3 matrix and stoere in a
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the element of the matrix b");
	//input 3*3 matrix and stoere in b
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
     //calculating matrix c by adding two matrix
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	
	//printing matrix c in proer matrix order
	for (i=0; i<3; i++)
	{
		printf("\n");           //used to change row of matrix
		for (j=0; j<3; j++)
		{
			printf("%d\t",c[i][j]);  //used \t to give space in row element
		}
	}


     //multiplication of same above 2 mtrix a and b
     for (i=0; i<3; i++)
     {
     	for (j=0; j<3; j++)
     	{
     		d[i][j]=0;
     		for(k=0; k<3; k++)
     		{	
     			d[i][j]=d[i][j]+a[i][j]+b[k][j];
			}
		}

	 }
	 printf("\n");
	 
	 for(i=0; i<3; i++)
	 {
	 	printf("\n");
	 	for (j=0; j<3; j++)
	 	{
	 		printf("%d\t,d[i][j]");
		 }
	 }
	 





}












