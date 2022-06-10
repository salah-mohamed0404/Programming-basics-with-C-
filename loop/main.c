#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    for(int i=n-1;i>0;i--)
    {
        printf("%d",i);
    }
    return 0;
}
