//wap to fond the factorial of a number 
/*
#include <stdio.h>
#include <math.h>
int main()
{

  int a,b,factorial;
  printf("enter the no to find the factorial");
  scanf("%d",&a);
 
  {
  for (b=1; b<=a; b++)
  factorial=factorial*b;
  {
   printf("the factorial of a number is %d",factorial);
  }  
  }
  return 0;
}*/


form progriamiz 


/*
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}*/
