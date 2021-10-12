#include <stdio.h>
int main()
{
int i=0,j=0;
int a[4][3];

//taking input matrix from user 
for (i=0; i<4; i++)
{
	for (j=0; j<3; j++)
	{
		printf("enter the value for a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
}

//printing the matrix element of an array in matrix formatSSSSSSSSSS

for (i=0; i<4; i++)
{
	printf("\n");                                //use \n to jump to next row 
	for (j=0; j<4; j++)
	{
		printf("a[%d][%d]=%d\t",i,j,a[i][j]);  //use tab to create spacing betn element in mtarix
	}
}

}
