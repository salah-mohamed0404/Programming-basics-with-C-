#include <iostream>

using namespace std;

int main()
{
    int numbers[1000],n,ck=0;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>numbers[i];

    for(int j=0;j<(n/2);j++)
        if(numbers[j]==numbers[n-j-1])
            ck++;
    if(ck)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
