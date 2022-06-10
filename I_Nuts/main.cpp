#include <iostream>

using namespace std;

int main()
{
    int n,a,sn{0};
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;

        if(a>10)
            sn+=(a-10);
    }

    cout<<sn;

    return 0;
}
