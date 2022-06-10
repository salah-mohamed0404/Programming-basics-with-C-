#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    long long a;
    while(t--){
        cin>>a;
        if(a>=1&&a<=6){
            cout<<"NO\n";
            continue;
        }
        a=a-(14*(a/14));
        if(a>=1&&a<=6)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
