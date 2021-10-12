#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	printf("enter the no to be in reverse order\n\t");
	scanf("%d",&a);
	while (a!=0)
	{
		b=a%10;
		a=a/10;
		printf(" %d",b);
		
	}
	printf("is the reverse order the given integer");
	return 0;
}

/*#include <stdio.h>
int main() {
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}

*/
