#include <stdio.h>
#include <string.h>
union nd
{
  
   int roll;
   int per;
};
int main()
{
    union nd nd1;
    {
        
        nd1.roll=14;
        nd1.per=95;
    };
    
    printf("the roll no is %d",nd1.roll);
    printf("the percentage is %d",nd1.per);
}
