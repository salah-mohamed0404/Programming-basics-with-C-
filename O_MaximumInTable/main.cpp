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
     int a[n][n];
     for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            if(j==0||i==0)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i][j-1];
        }

    cout<<a[n-1][n-1];

    return 0;
}
