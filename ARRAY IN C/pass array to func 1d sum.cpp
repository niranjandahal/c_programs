#include <stdio.h>

 int sum(int t[]) //store the elemnt in form of array when someone call sum
 {
 	int sum=0;
 	for(int i=0; i<6; i++)
 	{
 		sum = sum + t[i];
	 }
	return sum;
 }
 

int main()
{
	int result,a[]={2,55,6,8,10};
	result = sum(a);
	printf("the sum of element of an array is %d",result);
	return 0;
	
}



