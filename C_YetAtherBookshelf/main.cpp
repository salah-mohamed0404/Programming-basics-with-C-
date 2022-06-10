#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
     int t,n;
     cin>>t;

     while(t--){
        cin>>n;
        int f1,l1,cnt{0},a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            if(a[i]==1){
                f1=i;
                break;
            }
        for(int i=n-1; i>=0; i--)
            if(a[i]==1){
                l1=i;
                break;
            }
        for(int i=f1; i<=l1; i++)
            if(a[i]==0)
                cnt++;
        cout<<cnt<<el;
     }

    return 0;
}
