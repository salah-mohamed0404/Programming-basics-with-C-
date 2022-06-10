#include <iostream>

using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;

    IF(Y>Z)
    {
        cout<<"NO";
        return 0;
    }

    int cnt {0};
    for(int i=0;i<x.size();i++)
    {
        if(x[i]==y[i])
            cnt++;
    }

    if(cnt==y.size())
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
