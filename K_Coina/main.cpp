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

     int a,cnt1{0},cnt0{0};
     while(t--){
        cin>>a;
        if(a)
            cnt1++;
        else
            cnt0++;
     }

     cout<<min(cnt1,cnt0);

    return 0;
}
