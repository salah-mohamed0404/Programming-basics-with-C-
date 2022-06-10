#include <stdio.h>
#include <stdlib.h>

void SumThreeNums();
int main()
{
    int n1,n2,n3;
    printf("Hello, please enter the three numbers\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    SumThreeNums(n1,n2,n3);
    return 0;
}
void SumThreeNums(int n1,int n2,int n3)
{
    printf("The sum of three numbers is %d",n1+n2+n3);
}
