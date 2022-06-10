#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;
    int opr;
    printf("Hallo,enter the operation(1 for +,2 for -,3 for *,4 for /,5 for ^)\n");
    scanf("%d",&opr);
    printf("Please,enter the two numbers\n");
    scanf("%f\n",&num1);
    scanf("%f\n",&num2);
    switch(opr)
    {
        case 1 :
            printf("%f+%f=%f\n", num1, num2, num1+num2);
            break;
        case 2 :
            printf("%f-%f=%f\n", num1, num2, num1-num2);
            break;
        case 3 :
            printf("%f*%f=%f\n", num1, num2, num1*num2);
            break;
        case 4:
            printf("%f/%f=%f\n", num1, num2, num1/num2);
            break;

        default:
            printf("Error! the operation isn't correct\n");
    }

    return 0;
}
