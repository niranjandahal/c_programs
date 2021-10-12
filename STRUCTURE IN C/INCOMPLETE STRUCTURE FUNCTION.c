#include <stdio.h>

void funcdemo(struct student detail);

struct student
{
    int roll;
    float mark;
};

int main()
{
    struct student detail;

    detail.roll = 2;
    detail.mark = 85.25;

    funcdemo(detail);

    return 0;
}

void funcdemo(struct student detail)
{
    printf("the rol no is %d", detail.roll);
    printf("the mark is %f", detail.mark);
}