#include <iostream>

using namespace std;

int main()
{
//    cout<<'a'-'0';
    int n;
    cin>>n;

    string s;
    cin>>s;

    if(n==1){
        cout<<"YES";
        return 0;
    }
    int f[75]{0};
    for(int i=0; i<n; i++)
        f[s[i]-'0']++;

    for(int i=0; i<75; i++)
        if(f[i]>=2){
            cout<<"YES";
            return 0;
        }

    cout<<"NO";

    return 0;
}

