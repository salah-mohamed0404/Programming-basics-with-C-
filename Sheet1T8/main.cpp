#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int r,b,d;
        cin>>r>>b>>d;
        if(r-b<=d)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
