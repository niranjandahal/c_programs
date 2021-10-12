#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,7,9,21};
    printf("The Adress of %d\n\n",&arr[0]);
    printf("The Adress of %d\n\n",arr);
    printf("The Adress of %d\n\n",&arr[1]);
    printf("The Adress of %d\n\n",arr+1);

                
    printf("The value of %d\n\n",*(&arr[0]));
    printf("The value of %d\n\n",*(arr));
    printf("The value of %d\n\n",*(&arr[1]));
    printf("The value of %d\n\n",*(arr+1));
return 0;
}