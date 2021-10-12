#include <stdio.h>

//program work correctly
void swap(int *n1, int *n2);
int main()
{
    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("\n\t\t\t\t%d", a);
    printf("\n\t\t\t\t%d", b);
}
void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    printf("\n\t%d", n2);
    printf("\n\t%d", *n2);
}
/*
void func(int *p)
{
    (*p)++;
}
int main()
{
    int *p;
    int a = 10;
    p = &a;
    func(p);
    printf("%d", *p);
    return 0;
}*/