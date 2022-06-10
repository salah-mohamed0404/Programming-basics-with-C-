#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a,f[100001]{0},cnt;
    cnt=4*n-1;
    while(cnt--){
        cin>>a;
        f[a]++;
    }

    for(int i=1; i<=n; i++)
        if(f[i]!=4)
            cout<<i;

    return 0;
}
