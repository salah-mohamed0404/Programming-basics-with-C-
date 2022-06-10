#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
     int r,c,num;
     cin>>r>>c;

     bool is_fOrl=false;
     for(int i=0; i<r; i++)
        for(int j=0; j<c; j++){
            cin>>num;

            if(num==1&&(j==0||j==c-1))
                is_fOrl=true;
            if(num==1&&(i==0||i==r-1))
                is_fOrl=true;
        }

        if(is_fOrl)
            cout<<2;
        else
            cout<<4;

    return 0;
}
