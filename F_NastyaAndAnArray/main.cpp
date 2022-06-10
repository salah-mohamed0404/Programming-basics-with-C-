#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
     int n;
     cin>>n;

     int a[n];
     for(int i=0; i<n; i++)
            cin>>a[i];

    sort(a,a+n);
    int cnt{0};
    for(int i=0; i<n; i++)
        if(a[i]!=a[i-1]&&a[i]!=0)
            cnt++;

    cout<<cnt;

    return 0;
}
