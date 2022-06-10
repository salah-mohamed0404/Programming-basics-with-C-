#include <iostream>

using namespace std;

int main()
{
    int n,m,a[100][100],ra[100][100];
    cin>>n>>m;

    for(int r=0; r<n; r++)
        for(int c=0; c<m; c++)
            cin>>a[r][c];

    for(int r=0; r<n; r++)
        for(int c=0; c<m; c++)
            ra[c][r]=a[r][c];
    /*we can while reading do the fliping by switch r and c
    in line 12 and remove the second nested loop*/

    for(int r=0; r<m; r++){
        for(int c=0; c<n; c++)
            cout<<ra[r][c]<<" ";
        cout<<endl;
    }
    return 0;
}
