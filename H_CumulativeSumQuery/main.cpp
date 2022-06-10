#include <iostream>

using namespace std;
#define big 100000
int main()
{
    int n,a[big];
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];

    int q,bg,en;
    cin>>q;
    while(q--){
        cin>>bg>>en;

        int sum{0};
        for(int i=bg; i<=en; i++)
            sum+=a[i];

        cout<<sum<<endl;
    }
    return 0;
}
