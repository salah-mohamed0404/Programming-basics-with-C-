#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int sum=0,temp,x;
    for(int i=a;i<=n;i++)
    {
        for(int j=1,sumd=0;j++;)
        {
            x=i%10;
            temp=i;
            temp=i/10;
            sumd+=x;
            if(sumd>=a&&sumd<=b)
                sum+=i;
            if(temp==0)
                break;
        }

    }
    cout<<sum;
    return 0;
}
