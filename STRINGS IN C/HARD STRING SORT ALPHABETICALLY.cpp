#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int i,j,count;
	char nd[25][50],temp[50];      // 25 set of string with max 49 character MULTIDIMENSIONAL ARRAY
	printf("HOW many string u want to sort ");
	scanf("%d",&count);
	
	printf("\n enter the %d string one by one",count);
	for (i=0; i<=count; i++)
	{
		gets(nd[i]);
	}
	//sorting STRINGS previously also done in ARRAY 
	for (i=0; i<=count; i++)
	for (j=i+1; j<=count; j++)
	{
		if(strcmp(nd[i],nd[j]) > 0)           // understand deeply
		{
			strcpy(temp,nd[i]);
			strcpy(nd[i],nd[j]);
			strcpy(nd[j],temp);	
		}
	printf("order of the strings is");
		
	    	for (i=0; i<=count; i++)
		   {
			    puts(nd[i]);
		   }
	}
	
	return 0;

}
