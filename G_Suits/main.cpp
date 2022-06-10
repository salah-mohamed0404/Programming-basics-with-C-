#include <iostream>

using namespace std;

int main()
{
    int t,s,v,j,ct,csv;
    cin>>t>>s>>v>>j>>ct>>csv;

    int cnt{0},mnsv;
    mnsv=min(s,v);
    if(ct>=csv){
        if(t<=j){
            cnt+=t*ct;
            j-=t;
        }
        else if(t>j){
            cnt+=j*ct;
            j=0;
        }

        if(mnsv<=j&&j!=0)
            cnt+=mnsv*csv;
        else
            cnt+=j*csv;
    }

    else{
        if(mnsv<=j){
            cnt+=mnsv*csv;
            j-=mnsv;
        }
        else if(mnsv>j){
            cnt+=j*csv;
            j=0;
        }

        if(t<=j&&j!=0)
            cnt+=t*ct;
        else
            cnt+=j*ct;
    }

    cout<<cnt;
    return 0;
}
