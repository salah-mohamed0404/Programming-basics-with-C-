#include <stdio.h>
#include <stdlib.h>
void tables();
int main()
{
   tables();
    return 0;
}
void tables()
{
    for(int n=1;n<=9;n++)
    {
        for(int i=1;i<=9;i++)
        {
            printf("%d*%d=%d\n",n,i,n*i);
        }
        printf("\n");
    }
}
