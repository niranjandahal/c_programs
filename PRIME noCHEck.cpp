#include <stdio.h>
int main()
{
	int a,i;
	printf("enter no to check prime or not ");
	scanf("%d",&a);
	/* for (i = 2; i <= Number/2; i++)
   {
     if(Number%i == 0)
     {
        count++;
	break;
     }	
   } */
	for(i=2;i<=a/2;i++)
	{
    if(a%i==0)
       {
	    printf("it is prime no");
	    break;
       }
    else
	     {
		printf("it is not a prime no");
		break;
	     }   
    }
  
}
