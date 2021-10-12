#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char nd[100],temp;
    int i,j;
    printf("enter the single strings");
    scanf("%s",&nd);
    int n = strlen(nd);
    printf("%d\n\n\n\n",n);

    for (i = 0; i <n; i++)
    {
        for ( j = i+1; j <n; j++)
        {
            if (nd[j]<nd[i])
            {
            temp = nd[j];
            nd[j]=nd[i];
            nd[i]=temp;
            }
        }
        
    }
    
    printf("%s\n",nd);

}