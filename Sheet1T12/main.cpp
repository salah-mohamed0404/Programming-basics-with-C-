#include <iostream>

using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        if(n==1||m==1)
            cout<<"YES"<<endl;
        else if (n==2&&m==2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
