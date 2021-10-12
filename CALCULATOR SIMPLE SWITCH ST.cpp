// Program to create a simple calculator
#include <stdio.h>
#include <math.h>
int main() {
    char operate;
    double n1, n2;

    printf("Enter an operate (+, -, *, /): ");
    scanf("%c", &operate);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operate)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        default:
            printf("Error! operator is not correct");
    }

    return 0;
}

