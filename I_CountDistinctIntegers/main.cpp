#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int cnt{0};
    for(int i=1,j; i<n; i++){
        for(j=0; j<i; j++)
            if(a[i]==a[j])
                break;
        if(i==j)
            cnt++;
    }

    cout<<cnt+1;

    return 0;
}
