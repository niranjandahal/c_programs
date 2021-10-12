#include <stdio.h>
int main()
{
int i,n,sbig,fbig;

printf("enter the no of elemnt in array");
scanf("%d",&n);
int a[n];
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
    if(a[0]>a[1])
    {
        fbig=a[0];
        
        sbig=a[1];
    }
    else
    {
        fbig=a[1];
        sbig=a[0];
    }
    for ( i = 2; i < n; i++)
    {
        if (fbig<a[i])
        {
            sbig=fbig;
            fbig=a[i];
        }
        else if (sbig<a[i])
        {
            sbig=a[i];   
        }
    }
    
}




