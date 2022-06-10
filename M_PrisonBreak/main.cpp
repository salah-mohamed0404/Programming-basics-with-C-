#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int n,m,r,c,cb,ce,cdb,cde;
    while(t--){
        cin>>n>>m>>r>>c;
        cb=(r+c)-2;
        ce=(n+m)-(r+c);
        cdb=abs(1-r)+abs(m-c);
        cde=(n-r)+abs(1-c);
        cout<<max(cb,max(ce,max(cdb,cde)))<<endl;
    }
    return 0;
}
/*
x x x x x
x x x x x
x x x x x
x x x x x
x x x x x
*/
