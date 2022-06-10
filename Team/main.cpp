#include <iostream>

using namespace std;

int main()
{
    int n,p,v,t,cnt{0};
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>p>>v>>t;

        int tmp;
        tmp=p+v+t;
        if(tmp>1)
            cnt++;
    }

    cout<<cnt;
    return 0;
}
