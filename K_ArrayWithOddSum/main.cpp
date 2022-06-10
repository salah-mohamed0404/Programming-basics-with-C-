#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int n,a;
    while(t--){
        cin>>n;

        int sum{0},is_odd{0},is_even{0};
        while(n--){
            cin>>a;
            sum+=a;
            if(a%2==0)
                is_even=1;
            else
                is_odd=1;
        }
        if(sum%2!=0||(is_even&&is_odd))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
