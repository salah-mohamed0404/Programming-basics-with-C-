#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
    int li,lj,num;
     for(int i=0; i<5; i++)
        for(int j=0 ; j<5; j++){
            cin>>num;
            if(num==1){
                li=i;
                lj=j;
            }
        }

    int cnt{0};
    while (true){
        if(li>2){
            li-=1;
            cnt++;
        }
        if(li<2){
            li+=1;
            cnt++;
        }
        if(lj>2){
            lj-=1;
            cnt++;
        }
        if(lj<2){
            lj+=1;
            cnt++;
        }
        if(li==2&&lj==2){
            cout<<cnt;
            break;
        }
    }

    return 0;
}
