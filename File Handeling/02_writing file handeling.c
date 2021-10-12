#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nd;
    FILE *tsr;
    char md[1000];

    tsr = fopen("E:\\gg.txt", "w");

    if (tsr == NULL)
    {
        printf("erreo opening the file");
        exit(1);
    }

    printf("entert the no ti be inserted in the file");
    scanf("%d", &nd);
    fprintf(tsr, "%d", nd);
    fclose(tsr);
    return 0;
}