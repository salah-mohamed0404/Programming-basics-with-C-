#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    string s;
    cin>>s;

    int cnt1{0},cnt0{0};
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1')
            cnt1++;
        else
            cnt0++;
    }
    cout<<abs(cnt1-cnt0);
    return 0;
}
