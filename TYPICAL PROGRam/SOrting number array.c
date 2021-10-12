#include <stdio.h>
int main()
{
    int nd[5]; //input given 3 5 1 2 4 //output 1 2 3 4 5
    //entering data in array
    for (int i = 0; i < 5; i++)
    {
        printf("\nenter the %d elemnt  ", i + 1);
        scanf("%d", &nd[i]);
    }
    
    printf("\n\nwithout sorting it\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", nd[i]);
    }

    printf("\n\n the sorted DEsending order list\n\n");
    int a;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (nd[i] < nd[j])
            {
                a = nd[j];
                nd[j] = nd[i];
                nd[i] = a;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", nd[i]);
    }
    

    printf("\n\n The array in ASCENDING order is \n");
    int b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (nd[i] > nd[j])
            {
                b = nd[j];
                nd[j] = nd[i];
                nd[i] = b;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", nd[i]);

    }
    
}
