#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Hello, please enter the NUM\n");
    scanf("%d",&x);
    primec(x);

    return 0;
}
void primec(int x)
{
    int ck=1;
    if (x>=0)
    {
        for(int i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
                ck=0;
            }
        }

    printf("%d\n",ck);
    }
    else
        printf("enter a positive integer\n");

}
