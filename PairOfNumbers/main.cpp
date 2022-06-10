#include <iostream>

using namespace std;

int main()
{
    int n,m,sum,cnt=0;
    cin>>n>>m>>sum;

    for(int a=1;a<=n;a++)
        for(int b=1;b<=m;b++)
            if(a+b==sum)
                cnt++;

    cout<<cnt;
    return 0;
}
/*we can make the code faster by replace the second for loop
by simple math equetion a+b==sum then b==sum-a then check
if b in the interval 1<=b<=m if that true cnt++;*/
