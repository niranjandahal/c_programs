
#include <stdio.h>
#include <math.h>

 int main()
 { 
 double a,b,c,s,area;
 
printf("Enter the 3 sides of a traingle ");
scanf("%lf,%lf,%lf", &a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\tThe area of traingle is= %.2lf\n",area);
getch();

  

return 0; 
}
