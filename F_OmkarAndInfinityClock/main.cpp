#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    long long n,a[200005];
    long long k;
    while(t--){
        cin>>n>>k;
        int mx=-1e9-1,mn=2000;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>mx)
                mx=a[i];
            if(a[i]<mn)
                mn=a[i];
        }
        if(k%2!=0){
            for(int i=0; i<n; i++)
                cout<<mx-a[i]<<" ";
            cout<<endl;
            continue;
        }
        else{
            for(int i=0; i<n; i++)
                cout<<a[i]-mn<<" ";
            cout<<endl;
        }
    }
    return 0;
}
