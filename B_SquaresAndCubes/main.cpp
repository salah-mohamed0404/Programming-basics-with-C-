#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,i;
    long long z,j,co;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>z;
        co=(int)sqrt(z)+(int)cbrt(z)-(int)cbrt(sqrt(z));
        cout<<co<<endl;
    }
    return 0;
}
