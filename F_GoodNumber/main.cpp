#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    cin>>n>>k;

    int ans{0};
    string num;
    while(n--){
        cin>>num;
        int cnt{0};

        int is_r[k+1]{0};

       for(int i=0; i<num.size(); i++)
            if(num[i]-'0'<=k&&is_r[num[i]-'0']==0){
                cnt++;
                is_r[num[i]-'0']=1;
            }
//        cout<<cnt<<endl;
        if(cnt==k+1)
            ans++;
    }

    cout<<ans<<endl;

    return 0;
}
