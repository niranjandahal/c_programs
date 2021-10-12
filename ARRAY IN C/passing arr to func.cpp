#include <stdio.h>
   void niranjan(int data1,int data2) // taking information when someone call niranjan and store 2 value in data1 and data 
   {
   	printf("%d",data1);
   	printf("%d",data2);
   }


int main()
{
    int i,n;
    int a[100];
    printf("enter the no elemnt of an array");
    scanf("%d",&n); //takin number adn storing
    
    printf("\nenter the individual element of an array ");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&a[i]); // taking input and storing in array 1 dimensional
    }
    
    niranjan(a[1],a[2]);    // Calling NIRANJAN function to do something with 2 element in array
    return 0;
}


 
