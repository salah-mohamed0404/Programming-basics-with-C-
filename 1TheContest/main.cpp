#include <iostream>//every thing in it
#include <algorithm>
#include <math.h>
#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int main()
{
    int a,b,c,d,sum;
    cin>>a>>b>>c>>d;

    for(int i=a; i<=b; i++){
        for(int j=c; j<=d; j++){
            sum=i+j;
            int flag=1;
            for(int k=2;k<=sqrt(sum); k++)
                if(sum%2==0){
                    flag=0;
                    break;
                }
            if(flag){
                cout<<"Aoki";
                return 0;
            }
        }
    }

    cout<<"Takahashi";

    return 0;
}
