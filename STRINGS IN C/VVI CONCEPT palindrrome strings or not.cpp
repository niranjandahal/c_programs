//wap to find the strings is a palindrom eor not 
#include <stdio.h>
#include<string.h>
int main()
{
	char md[50],nd[50];
	printf("enter the strings to check palindrome");
	scanf("%s",&nd);		                          
	
	  //1ST methods to check palindrome
	
	strcpy(md,strrev(nd)); //VVVVVVIIIIIVVII the nd strings is permanently changed to its reversed form and copied to md
	
	strrev(nd);         //above code has permanently reverse the string nd so this line is to reverse back to the orignal

	if(strcmp(md,nd)==0)  // comparing the reverse md with orignal nd
	{
		printf("\n palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	 
	 
	
//it is vry wrong in c so i commented whole code 

/*	strrev(nd);
	if(strrev(nd)==nd)
	{
		printf("it is palindrome");
	}
	else
	{
		printf("it isnt palindrome");
	}
	return 0;	
*/	
	//2nd method to check palindrome
	
	int i,n,c=0;
	n=strlen(nd);                                    // store length of a string in n 	
	
	 for(i=0;i<n/2;i++)  
    {
    	if(nd[i]==nd[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("\nstring is palindrome");
    else
        printf("\nstring is not palindrome");
}


