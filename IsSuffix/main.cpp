#include <iostream>

using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;

    if(y>x)
    {
        cout<<"NO";
        return 0;
    }

    int cnt {0};
    for(int i=(y.size())-1; i>=0; i--)
    {
        if(x[i+(x.size()-y.size())]==y[i])
            cnt++;
    }

    if(cnt==y.size())
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
