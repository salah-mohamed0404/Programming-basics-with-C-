#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,ch;
    char en;
    for(int i=1;i>=0;i++)
    {
        printf("MENU\n\t1.add\n\t2.subract\n\t3.mutiply\n\t4.divide\n\t5.modulus\n");
        printf("enter your choice:");
        scanf("%d\n",&ch);
        printf("enter two numbers:");
        scanf("%d %d",&n1,&n2);
        calc(n1,n2,ch);
        printf("enter y to go again or any thing to go out: ");
        scanf(" %c",&en);
        if(en!='y')
            break;
    }
    return 0;
}
void calc(int n1,int n2,int ch)
{
    int R;
    switch (ch)
    {
        case 1:
            R=n1+n2;
            break;
        case 2:
            R=n1-n2;
            break;
        case 3:
            R=n1*n2;
            break;
        case 4:
            if(n2!=0)
                R=n1/n2;
            else
                printf("unknown");
            break;
        case 5:
            R=n1%n2;
            break;
    }
    printf("Result=%d\n",R);
}
