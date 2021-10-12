#include <stdio.h>
#include <conio.h>
 main()
 { char data[100];
printf("enter the strings for gets():");
gets(data);

//No necessary below printf line
printf("Entered data is: will be with puts():\n\n");

puts(data);

//Wait for an output screen
getch();




return 0; 
}