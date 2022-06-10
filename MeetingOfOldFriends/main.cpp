#include <iostream>

using namespace std;

int main()
{
    long long l1,r1,l2,r2,k,defr,mx,mn;
    cin>>l1>>r1>>l2>>r2>>k;

    mx=max(l1,l2);
    mn=min(r1,r2);

    defr=mn-mx+!(k>=mx&&k<=mn);
    if(defr<0)
        cout<<"0";
    else
        cout<<defr;

    return 0;
}
// 1 100 50 200
// 50 200 1 100
