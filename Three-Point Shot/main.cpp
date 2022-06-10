#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if(x<y)
    {
        if((x+=3)>y)
            cout<<"Yes";
        else
            cout<<"No";
    }
    else
    {
        if((y+=3)>x)
            cout<<"Yes";
        else
            cout<<"No";
    }

    return 0;
}
