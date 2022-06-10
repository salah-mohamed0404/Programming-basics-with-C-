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

     int day=1;
     for(int i=0; i<n; i++)
        if(a[i]>=day)
            day++;

     cout<<day-1;

    return 0;
}
