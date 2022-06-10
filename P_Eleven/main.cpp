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
     int f[n];
     f[1]=1;
     f[2]=1;
     f[3]=2;
//     for(int i=3; i<n; i++){
//        f[i]=f[i-1]+f[i-2];
////        cout<<f[i]<<el;



     for(int i=1,j=2; i<=n; i++){
        if(i==f[j]){
            cout<<"O";
            j++;
            f[j]=f[j-1]+f[j-2];
        }
        else
            cout<<"o";

     }

    return 0;
}
