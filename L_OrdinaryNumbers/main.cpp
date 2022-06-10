#include <iostream>

using namespace std;

int main()
{
    int t,num;
    cin>>t;

    while(t--){
        cin>>num;

        int cnt{0};
        for(int i=1; i<=9; i++){
            long long tmp=i;
            while (num>=tmp){
                cnt++;
                tmp=tmp*10+i;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
