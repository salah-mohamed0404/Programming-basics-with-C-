#include <iostream>

using namespace std;

int main()
{
    int n,f[10] {0};
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;

        if(num==0)
            f[0]++;

        while(num)
        {
            int d=num%10;
            f[d]++;
            num/=10;
        }
    }

    for(int i=0;i<10;i++)
        cout<<i<<" "<<f[i]<<endl;

    return 0;
}
