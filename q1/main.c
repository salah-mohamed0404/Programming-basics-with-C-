#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("enter an alphabet to check if it vowel or consonant\n");
    scanf(" %c",&c);
    switch(c)
    {
        case 'a' :
            printf("the alphabet is vowel\n");
            break;
        case 'e':
            printf("the alphabet is vowel\n");
            break;
        case 'u':
            printf("the alphabet is vowel\n");
            break;
        case 'i':
            printf("the alphabet is vowel\n");
            break;
        case 'o':
            printf("the alphabet is vowel\n");
            break;
        default:
            printf("the alphabet is consonant\n");
            break;
    }

    return 0;
}
