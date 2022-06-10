#include <stdio.h>
#include <stdlib.h>
void printif (int x)
{
    if(x%2==1)
    {
        printf("odd");
        return;
    }
printf("even");
}
int main()
{
    printif(2);
    return 0;
}
