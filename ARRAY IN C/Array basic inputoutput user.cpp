#include <stdio.h>
int main()
{
	int a,i,j;
	printf("enter the no elemnt can be used in an array");
	scanf("%d",&a);
    int n[a];

    for ( i = 0; i < a; i++)
    {
        printf("enter the %d value for an array = \n",i);
        scanf("%d",&n[i]);
    }

    for ( j = 0; j < a; j++)
    {
        printf("%d output is %d \n",j,n[j]);
    }
    return 0;
}
    

