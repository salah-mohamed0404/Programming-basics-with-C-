#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int n;
    while(t--){
        cin>>n;
        int a[n],mx=0,mn=1000000009;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>mx)
                mx=a[i];
            if(a[i]<mn)
                mn=a[i];
//            cout<<mn<<" "<<mx<<endl;
        }

        for(int i=0; ; i++){
                if(mn<mx)
                    mn++;
                else{
                    cout<<i<<endl;
                    break;
                }
        }
    }
    return 0;
}
