#include <iostream>

using namespace std;

int main()//count sort algorithm
{
    int n,f[901] {0};
    cin>>n;

    for(int i=0;i<n;i++)
        {
            int value;
            cin>>value;
            f[value]++;
        }
    for(int i=0;i<901;i++)
        while(f[i])
        {
            --f[i];
            cout<<i;
        }

    return 0;
}
