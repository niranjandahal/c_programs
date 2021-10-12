#include <stdio.h>
#include <conio.h>
main()
{

    int x=321;
    printf("%d \n"); //no field with specification
    printf("%7.3f\n",x);
    printf("%7.2f\\n",x);
    printf("%7.3f\n",x);
    printf("%-7.2f\n",x);
    
    getch();
}

