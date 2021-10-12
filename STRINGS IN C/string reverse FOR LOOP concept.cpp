//wap to take strings and reverse it
#include <stdio.h>
#include <string.h>
int main()
{
	char nd[50];
	printf("enter the string to be reverse order");
	scanf("%s",&nd);
	
	//char b[50] = strrev(nd);
	//printf("the reverse order of the strings is =%s",b);
	
	printf("\nthe reverse order of the strings is = %s\n\n\n\n",strrev(nd));
	
    //using for loop

	strrev(nd);  //again changing to orignal so that below for loop works
    
	int length,i,j;
	length = strlen(nd);
	

		for (j=length; j>=0; j--)
		{
			printf("%c",nd[j]);
		}
		
    printf("\n"); 
	return 0;
}
