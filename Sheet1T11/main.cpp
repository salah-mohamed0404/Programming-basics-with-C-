#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    if(a>b)
        x=a;
    else
        x=b;
    if(c>d)
        y=d;
    else
        y=c;
    cout<<x-y;
    return 0;
}
