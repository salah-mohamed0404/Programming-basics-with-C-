#include <iostream>

using namespace std;

int main()
{
    int H,W,h,w,r,c,p;
    cin>>H;
    cin>>W;
    cin>>h;
    cin>>w;
    r=H-h;
    c=W-w;
    p=r*c;
    cout<<p;

    return 0;
}
