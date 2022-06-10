#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

using namespace std;

int main()
{
    int a[501],t,len;
    cin>>t;

    while(t--){
        cin>>len;
        for(int i=0; i<len; i++)
            cin>>a[i];
        sort(a,a+len);
        for(int i=0; i<len; i++)
            cout<<a[i]<<" ";

        cout<<endl;
    }
    return 0;
}
