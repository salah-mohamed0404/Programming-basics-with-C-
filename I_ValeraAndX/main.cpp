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

     char s[n][n];
     for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>s[i][j];

    char refr=s[0][1],refr2=s[0][0];

    if(refr==refr2){
        cout<<"NO";
        return 0;
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            if(j==i||i+j==n-1){
                if(s[i][j]!=refr2){
                    cout<<"NO";
                    return 0;
                }
            }
            else if(s[i][j]!=refr){
                cout<<"NO";
                return 0;
            }
        }

        cout<<"YES";

    return 0;
}
