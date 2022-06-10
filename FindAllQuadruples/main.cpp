#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;

    int cnt=0;

    for(a=1;a<=200;a++)
        for(b=1;b<=200;b++)
            for(c=1;c<=200;c++)
                for(d=1;d<=200;d++)
                    cnt+=(a+b==c+d);
    cout<<cnt;
    return 0;
}
/*we can replace the fourth for loop by d=a+b-c and check if
it in the range if true cnt++*/
