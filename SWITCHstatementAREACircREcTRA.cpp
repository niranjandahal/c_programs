//wap to calculate area of circle trinagle and rectangle by switch statement
#include <stdio.h>
#include <math.h>
int main()
{
 int n;
float r,b,h,len,bre,area; 
 printf("\n1.ARea of circle");
 printf("\n2.ARea of right angle Triangle");
 printf("\n3.Area of rectangle");
 printf("\n4.Enter Ur choice in number");
 scanf("%d",&n);
 
  switch(n)
 {
   
  case 1:
  	   printf("Enter the radius of circle");
  	   scanf("%f",&r);
  	   area=(3.1415*r*r);
  	   printf("\nTHe area of the circle is %f",area);
  	   break;
  	
  	case 2:
  	   printf("Enter the base and height");
  	   scanf("%f%f",&b,&h);
  	   area=(0.5*b*h);
  	   printf("THe area of the triangle is %f",area);
	   break;
	   
	case 3:
	   printf("Enter the l and b of rectangle");
  	scanf("%f%f",&len,&bre);
  	area=(len*bre);
  	printf("THe area of the rectangle is %f",area);
  	break;  
	  
	deafult:   
    printf("sorry i cant calculate use system calcutor");   
 }

}
