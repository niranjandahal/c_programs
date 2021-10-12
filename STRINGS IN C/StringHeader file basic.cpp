/*strlen	calculates the length of string
strcat	Appends one string at the end of another
strncat	Appends first n characters of a string at the end of another
strcpy	Copies a string into another
strncpy	Copies first n characters of one string into another
strcmp	Compares two strings
strncmp	Compares first n characters of two strings
strchr	Finds the first occurrence of a given character in a string
strrchr	Finds the last occurrence of a given character in a string
strstr	Finds the first occurrence of a given string in another string
strcspn	Calculates the initial length of a string, not containing any character of the other string
strspn	Calculates the initial length of a string, containing the only characters of the other string
strpbrk	Finds the first occurrence of any of the characters of a string in another string
strtok	splits a string into token
*/
#include <stdio.h>
#include <string.h>
int main()
{
	char nd[100],md[100];
	printf("enter the 1st strings for the manupulation");
	scanf("%s",&nd);
	printf("\n\nenter the 2nd strings for the manupulation");
	scanf("%s",&md);
	
	printf("\n\nthe length of 1st strings = %d",strlen(nd));
	printf("\nthe length of 2nd strings = %d",strlen(md));
	printf("\n\nthe joins of 2 strings = %s",strcat(nd,md));
	printf("\nthe copy of 1st to 2nd strings = %s",strcpy(nd,md));
	printf("\n\nthe copy of 1st strings to second to nth location = %s",strncpy(nd,md,4));
	printf("\n\nthe comparision of 1st strings and second strings = %d",strcmp(nd,md));
	printf("\n\nthe comparision of 1st strings and second strings to nth location = %d",strncmp(nd,md,4));
	printf("\n\nthe lower case of 1st strings= %s",strlwr(nd));
	printf("\n\nthe upper case of second strings = %s",strupr(md));
	printf("\n\nthe reverse of 1st strings = %s",strrev(nd));
		
}




















































