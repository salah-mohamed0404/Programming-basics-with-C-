#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string s;
    while(t--){
        cin>>s;

        int b_cnt{0},ac_cnt{0};
        for(int i=0; i<s.size(); i++){
            if(s[i]=='B')
                b_cnt++;
            else
                ac_cnt++;
//            cout<<"b="<<b_cnt<<"  AC="<<ac_cnt<<endl;
        }

        if(b_cnt==ac_cnt)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
