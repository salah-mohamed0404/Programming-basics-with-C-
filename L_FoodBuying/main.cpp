#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int s;
    while(t--){
        cin>>s;

        int ans{0},x;
        while(true){
            x=(s/10)*10;
            if(s>=10){
                ans+=x;
                s-=x-(x/10);
            }
            else{
                cout<<ans+s<<endl;
                break;
            }
        }
    }
    return 0;
}
