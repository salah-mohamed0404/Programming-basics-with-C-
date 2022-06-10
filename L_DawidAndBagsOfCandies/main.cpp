#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
     int n1,n2,n3,n4;
     cin>>n1>>n2>>n3>>n4;

     int mx=max(n1,max(n2,max(n3,n4)));
     int mn=min(n1,min(n2,min(n3,n4)));
     int sum=n1+n2+n3+n4;

     if(mx==sum-mx||(mx+mn)==sum-mx-mn)
        cout<<"YES";
     else
        cout<<"NO";

    return 0;
}
