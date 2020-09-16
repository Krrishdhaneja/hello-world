#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double num1;
    double num2;
    double op;
    printf("plus(type 1)\n");
    printf("minus(type 2)\n");
    printf("multiply(type 3)\n");
    printf("divide(type 4)\n");
    printf("square(type 5)\n");
    printf("square root(type 6)\n");
    printf("exponentiation(type 7)\n");
    printf("\n");
    printf("type the first num:\n");
    scanf("%lf", &num1);
    printf("type the num2:\n");
    scanf("%lf", &num2);
    printf("type the operator(type 8 to know all the operators)\n");
    scanf("%lf", &op);

    if (op == 8)
    {
        printf("plus(type 1)\n");
        printf("minus(type 2)\n");
        printf("multiply(type 3)\n");
        printf("divide(type 4)\n");
        printf("square(type 5)\n");
        printf("square root(type 6)\n");
        printf("exponentiation(type 7)\n");
    }
    else if (op == 1)
    {
        printf("%lf", num1 + num2);
    }
    else if (op == 2)
    {
        printf("%lf", num1 - num2);
    }
    else if (op == 3)
    {
        printf("%lf", num1 * num2);
    }
    else if (op == 4)
    {
        printf("%lf", num1 / num2);
    }
    else if (op == 5)
    {
        double d;
        printf("type 1 for num1 to be squared or type 2 for num2 be squared:\n");
        scanf("%lf",&d);
        if (d==1)
        {
            printf("%lf",pow(num1,2));
        }
        else if (d==2)
        {
            printf("%lf", pow(num2, 2));
        }
        
        
        
        
    }
    else if (op == 6)
    {
        double k;
        printf("which number you want to be rooted(type 1[for num1] or 2[for num2]):\n");
        scanf("%lf", &k);
        if (k == 1)
        {
            printf("%lf", sqrt(num1));
        }
        else if (k == 2)
        {
            printf("%lf", sqrt(num2));
        }
        else
        {
            printf("nothing");
        }
    }
    else if (op == 7)
    {
        printf("%lf", pow(num1, num2));
    }
    else
    {
        printf("nothing to do");
    }

    return 0;
}
