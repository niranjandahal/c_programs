#include <stdio.h>
struct nd
{
    char name[10];
    int roll;
    char gender;
    int per;
};

main()
{
    //this commented portion CODE WORK CORRECTLY
    /*struct nd b[10];
    {
        for (int i=0; i<=1; i++)
        {
        printf("\n enter the roll no");
        scanf("%d", &b[i].roll);
        printf("\n enter the name");
        scanf("%s", &b[i].name);
        printf("\n enter the gender");
        scanf(" %c", &b[i].gender);
        printf("\n enter the percentage");
        scanf("%f", &b[i].per);
        }
        printf("here is the data of 2 students");

        for (int i = 0; i <= 1; i++)
        {   
        printf("\n%d", b[i].roll);
        printf("\n%s", b[i].name);
        printf("\n%c", b[i].gender);
        printf("\n%f", b[i].per);
        printf("\n\n\n");
        }
    }
    */

    //taking input in one line

    struct nd tsr[50];
    {
        int n;
        printf("enter the no of the students to store data");
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            printf("\nenter NAME ROLL NO GENDER PERCENT one by one for %d students", i + 1);
            scanf("%s%d %c%d", &tsr[i].name, &tsr[i].roll, &tsr[i].gender, &tsr[i].per);
        }

        for (int i = 0; i < n; i++)
        {
            printf("\nthe name of %d students is %s", i + 1, tsr[i].name);
            printf("\nthe roll no of an students is %d", tsr[i].roll);
            printf("\nthe gender is %c", tsr[i].gender);
            printf("\nthe percentage score of an students is %d", tsr[i].per);
            printf("\n\n");
        }
    }
}
