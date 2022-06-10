#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    scanf(" %c",&n);
    check(n);
    return 0;
}
void check(char n)
{
    if(n=='1'||n=='2'||n=='3'||n=='4'||n=='5'||n=='6'||n=='7'||n=='8'||n=='9')
        printf("true");
    else
        printf("false");
}
