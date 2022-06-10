#include <iostream>

using namespace std;

int main()
{
    int numbers[200],n,mn=10000,mx=-1;
    cin>>n;

    for(int i=0;i<n;i++)
        {
            cin>>numbers[i];
            if(numbers[i]<mn)
                mn=numbers[i];
            if(numbers[i]>mx)
                mx=numbers[i];
        }
    for(int j=0;j<n;j++)
    {
        if(numbers[j]==mn)
            numbers[j]=mx;
        if(numbers[j]==mx)
            numbers[j]=mn;
    }

        for(int i=0;i<n;i++)
            {
                if(i)
                    cout<<" ";
                cout<<numbers[i];
            }
    return 0;
}
