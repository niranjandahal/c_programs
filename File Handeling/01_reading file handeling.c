#include <stdio.h>
#include<stdlib.h>
int main()
{
    char md[1000];
    int nd;
    FILE *tsr;
    if((tsr = fopen("E:\\gg.txt","r"))==NULL)
    {
        printf("error oprning the file");
        exit(1);
    }
    fscanf(tsr,"%d",&nd);
    printf("value is : %d ",nd);
    fclose(tsr);
    fscanf(tsr,"%s",&md);
    printf("the strings is : %s",md);

    return 0;
}