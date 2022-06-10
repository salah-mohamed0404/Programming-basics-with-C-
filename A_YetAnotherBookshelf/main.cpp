#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int n,a[51];
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];

        int cnt{0},tcnt{0};
        bool flag=1;
        for(int i=0; i<n; i++){
            if(a[i]==1&&flag)
                flag=0;

            if(!flag){
                if(a[i]==0)
                    tcnt++;
                if(a[i]==1){
                    cnt+=tcnt;
                    tcnt=0;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
