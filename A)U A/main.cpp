#include <iostream>

using namespace std;

int main()
{
    int long n,r;
    int i,j,k;
    i=0;j=0;k=0;
    cin>>n;
    if(n>=50)
    {
        for(i=0;r>=50;i++)
        {
            r=n-50;
        }
    }
    if(r>=20)
    {
        for(j=0;r>=20;j++)
        {
            r-=20;
        }
    }
    if(r>=1)
    {
        for(k=0;r>=1;k++)
        {
           r-=1;
        }
    }
    cout<<i+j+k;
    return 0;
}
