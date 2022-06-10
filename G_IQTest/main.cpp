#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
    int a[4][4]{0};
    string s;
    for(int i=0; i<4;i++){
        cin>>s;
        for(int j=0; j<4; j++){
            if(s[j]=='#')
                a[i][j]=1;
            else
                a[i][j]=-1;
        }
    }

    int res;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++){
            res=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
            if(res==2||res==-2||res==4||res==-4){
                cout<<"YES";
                return 0;
            }
        }
    cout<<"NO";

    return 0;
}
