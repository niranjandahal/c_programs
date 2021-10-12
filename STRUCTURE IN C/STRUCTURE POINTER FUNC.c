#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
};

void func(struct student *record);

int main()
{
    struct student record;

    record.id = 1;
    strcpy(record.name, "niranjan");
    record.percentage = 3.5;

    func(&record);
    return 0;
}

void func(struct student *record)
{
    printf("id is %d\n", record->id);
    printf("the name is %s\n", record->name);
    printf("the roll is %f\n", record->percentage);
}
