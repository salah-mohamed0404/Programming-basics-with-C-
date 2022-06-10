#include <stdio.h>
#include <math.h>

int main()
{
    float num1,num2;
    char op;
    printf("\t\t\t\t\t\t Hello to your calculator\n");
    printf ("please enter your equation:\n");
    while(1)
    {
        printf("enter 1 to continue or -1 to exit\n");
        int exit;
        scanf("%d",&exit);
        if(exit==-1)
            break;
        scanf ("%f %c %f",&num1,&op,&num2);

        if (op=='+')
            printf ("Result=%.1f\n",num1+num2);
        else if (op=='*')
            printf ("Result=%.1f\n",num1*num2);
        else if (op=='-')
            printf ("Result=%.1f\n",num1-num2);
        else if (op=='/' && num2 != 0)
            printf ("Result=%.1f\n",num1/num2);
        else if (op=='/' && num2== 0)
            printf ("unknown\n");
        else if (op=='^')
            printf ("Result=%.1f\n",pow(num1,num2));
        else
            printf("Error! operator must be (+,-,*,/,^), Enter the right equation\n");
    }

    return 0;
}
