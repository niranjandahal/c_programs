#include <stdio.h>
#include <math.h>
int main()
{
    int n,a;
    printf("\nenter a number to reverse\n");
    scanf("%d",&n);
    
    /*
    //easiest method
    while (n!=0)
    {
        a=n%10;
        n=n/10;
        printf("%d",a);
    }
    printf("  is the reverse of the orginal number     ");
    printf("%d",n);
    */

    //Storing reverse no in variable and printing variable
    int rem,b=0;
    while (n!=0)
    {
        rem=n%10;
        b=b*10 + rem;
        n=n/10;
    }
   printf("\n\nthe revrese of the given no is %d\n\n",b);
}