#include <stdio.h>
int main()
{
	char ND[]={'n','i','r','a','n','j','a','n','\0'};  // declaring strings simple

	char ND1[]="niranjan";                            //also be declare like this
	
	printf("\nthe string is = %s",ND);  
	                                                //printing
	printf("\nthe string is = %s",ND1);	
	
	
	//get and puts can also be use by declaring char 
	
	
	char ND3[50]; // declaring strings of size 49 last is null character
	
	printf("\n\n\n\nenter the strings");
	 
	gets(ND3);                                    //take strings from user
	
	printf("\n\n\n\nthe user input is %s\n\n\n\n",ND3);        // print string using %s
	
	puts(ND3);	                                //also can be printed using puts
}


