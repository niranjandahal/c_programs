#include <stdio.h>

void niranjan(char ND[])                   //defining function
{
	printf("\n\nthe input strings is = %s",ND);
}

int main()
{
	char nd[100];
	printf("enter the strings to pass to the function");
	scanf("%s",&nd);
	 
	niranjan(nd);	                         //calling function
}

//basic pointer and strings programiz
/*#include <stdio.h>

int main(void) {
  char name[] = "Harry Potter";

  printf("%c", *name);     // Output: H
  printf("%c", *(name+1));   // Output: a
  printf("%c", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     // Output: H
  printf("%c", *(namePtr+1));   // Output: a
  printf("%c", *(namePtr+7));   // Output: o
}
*/

