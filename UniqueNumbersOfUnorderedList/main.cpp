#include <iostream>

using namespace std;

int main()
{
    int n,f[901] {0};
    cin>>n;

    for(int i=0;i<n;i++)
        {
            int value;
            cin>>value;

            if(!f[value])
                cout<<value<<" ";
            f[value]=1;
        }

    return 0;
}
