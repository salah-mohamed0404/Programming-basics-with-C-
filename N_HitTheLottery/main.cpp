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

     int cnt{0};
     while(n){
        if(n>=100){
            n-=100;
            cnt++;
        }
        else if(n>=20){
            n-=20;
            cnt++;
        }
        else if(n>=10){
            n-=10;
            cnt++;
        }
        else if(n>=5){
            n-=5;
            cnt++;
        }
        else{
            n-=1;
            cnt++;
        }
     }

     cout<<cnt;

    return 0;
}
