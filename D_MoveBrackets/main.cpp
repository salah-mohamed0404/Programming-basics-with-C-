#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cnt{0},bal{0};
        for(int i=0; i<n; i++){
            if(s[i]=='(')
                bal++;
            else
                bal--;
            if(bal<0){
                cnt++;
                bal=0;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
