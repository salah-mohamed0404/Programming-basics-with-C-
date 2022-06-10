#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n],sum{0};
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }

        bool imp=0;
        for(int i=n; i>0; i--){
            if(sum%i)
                continue;
            int cursum{0};
            int goal=sum/i;

            for(int j=0; j<n; j++){
                cursum+=a[j];
                if(cursum>goal)
                    break;
                if(cursum==goal&&j==n-1)
                    imp=1;
                if(cursum==goal)
                    cursum=0;
            }
            if(imp){
                cout<<n-i<<endl;
                break;
            }
        }

        }

    return 0;
}
