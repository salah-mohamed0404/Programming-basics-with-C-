#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
    int a[6];

    int sum{0};
    for(int i=0; i<6; i++){
        cin>>a[i];
        sum+=a[i];
    }

    sort(a,a+6);

    int nsum{0};
    for(int i=0; i<4; i++)
            for(int j=i+1; j<5; j++)
                for(int k=j+1; k<6; k++){
                    nsum=a[i]+a[j]+a[k];
                    if(nsum==(sum-nsum)){
                        cout<<"YES";
                        return 0;
                        }
                    }
    cout<<"NO";

    return 0;
}
