#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
     int a[4];
     for(int i=0; i<4; i++)
        cin>>a[i];

     sort(a,a+4);
     int cnt{0};
     for(int i=1; i<4; i++)
        if(a[i-1]==a[i])
            cnt++;

     cout<<cnt;

    return 0;
}
