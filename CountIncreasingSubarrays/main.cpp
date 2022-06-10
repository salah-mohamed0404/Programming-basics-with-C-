#include <iostream>

using namespace std;

int main()
{
    int n,a[200];
    cin>>n;

    int cnt=n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    int res=0;
    int len=1;

    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            res+=len;
            len++;
        }
        else
            len=1;
    }
    cout<<res+n;

    return 0;
}
