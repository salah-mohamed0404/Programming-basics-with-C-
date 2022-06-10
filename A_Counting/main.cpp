#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if(y<x)
        cout<<"0";
    else
        cout<<y-x+1;

    return 0;
}
