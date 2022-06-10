#include <iostream>

using namespace std;

int main()
{
    int n,m,a[100][100];
    cin>>n>>m;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];

    int q;
    cin>>q;
    while(q--){
        int q,qr1,qr2,res=1;
        cin>>qr1>>qr2;
        for(int c=0; c<m; c++){
            if(a[qr1-1][c]>a[qr2-1][c]){
                res=0;
                break;
            }
    }
    if(res)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }

    return 0;
}
