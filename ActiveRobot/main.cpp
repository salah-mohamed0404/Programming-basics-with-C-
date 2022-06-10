#include <iostream>

using namespace std;

int main()
{
    int n,m,a[100][100],k;
    cin>>n>>m>>k;

    int r{0},c{0},d,s;
    int rd[4]={-1,0,1,0};
    int cd[4]={0,1,0,-1};
    while(k--){
        cin>>d>>s;
        d--;//to make to in zero base

        r=(r+(rd[d]*s))%n;
        c=(c+(cd[d]*s))%m;

        if(r<0)
            r+=n;
        if(c<0)
            c+=m;

        cout<<r<<" "<<c<<endl;
    }
    return 0;
}
