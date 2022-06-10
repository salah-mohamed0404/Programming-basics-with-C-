#include <stdio.h>
#include <stdlib.h>

int main()
{
    SumE1_20();
    return 0;
}
void SumE1_20()
{
    int sum=0;
    for(int i=1;i<=20;i++)
    {
       if(i%2==0)
            sum+=i;
    }
    printf("%d",sum);
}
