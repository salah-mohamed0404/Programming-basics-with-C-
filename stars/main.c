#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        for(int s=10;s>=i;s--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
