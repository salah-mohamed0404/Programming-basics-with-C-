#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    char a[101][101];
    for(int i =0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];

    for(int i =0; i<n; i++)
        for(int j=1; j<m; j++){
            if(a[i][j]!=a[i][j-1]){
                cout<<"NO";
                return 0;
            }
            if(j==m-1&&i!=n-1&&a[i][j]==a[i+1][0]){
                cout<<"NO";
                return 0;
            }
        }

        cout<<"YES";

    return 0;
}
