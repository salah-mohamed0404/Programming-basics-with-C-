#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
     int n,mx{0},mx_i,mn{101},mn_i,a;
     cin>>n;

     for(int i=0; i<n; i++){
        cin>>a;
        if(a>mx){
            mx=a;
            mx_i=i;
        }
        if(a<=mn){
            mn=a;
            mn_i=i;
        }

     }
//     cout<<mx_i<<" "<<mn_i<<el;

     int cnt=mx_i+((n-1)-mn_i);
     if(mx_i<mn_i)
        cout<<cnt;
     else
        cout<<cnt-1;

    return 0;
}
