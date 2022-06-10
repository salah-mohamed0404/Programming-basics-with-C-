#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a==b&&a==c){
            cout<<0<<el;
            continue;
        }

        if(a!=b&&a!=c&&b!=c){
            int fres,sres,tres;
            fres= abs((a-1)-(b-1))+abs((a-1)-c)+abs((b-1)-c);
            sres=abs(a-(b-1))+abs(a-(c-1))+abs((b-1)-(c-1));
            tres=abs((a-1)-b)+abs((a-1)-(c-1))+abs(b-(c-1));
            cout<<min(fres,min(sres,tres))<<el;
            continue;
        }

        int fck,sck,tck;
        fck=abs(a-(b-1))+abs(a-c)+abs((b-1)-c);
        sck=abs((a-1)-b)+abs((a-1)-c)+abs(b-c);
        tck=abs(a-b)+abs(a-(c-1))+abs(b-(c-1));
        cout<<min(fck,min(tck,sck))<<el;

    }
    return 0;
}
