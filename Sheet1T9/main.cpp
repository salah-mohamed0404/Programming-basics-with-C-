#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x==1||x==2||x==3||x==4||x==5)
        cout<<1;
    else
    {
        for(int i=1;i<=5;i++)
        {
            for(int j=i;j<=5;j++)
            {
                int r;
                r=+j;
                int s;
                s=j;
                if(r==x)
                    cout<<s;

            }
        }
    }
    return 0;
}
