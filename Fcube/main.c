#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    cube(n);
    return 0;
}
void cube( int n)
{
    int C;
    C=n*n*n;
    printf("%d",C);
}
