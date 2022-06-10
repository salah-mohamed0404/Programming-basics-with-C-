#include <iostream>

using namespace std;

int main()
{
    string a;
    cin>>a;

    int cnt=1;
    for(int i=1; i<=a.size(); i++)
    {

        if(a[i-1]==a[i])
            cnt++;
        else if(i==a.size())
        {
            cout<<a[i-1]<<cnt++;
            continue;
        }

        else
        {
            cout<<a[i-1]<<cnt<<"_";
            cnt=1;
        }

    }
    return 0;
}
