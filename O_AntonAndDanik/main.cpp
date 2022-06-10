#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string a;
    cin>>a;

    int acnt{0}, dcnt{0};
    for(int i=0; i<n; i++){
        if(a[i]=='A')
            acnt++;
        else if(a[i]=='D')
            dcnt++;
    }

    if(acnt>dcnt)
        cout<<"Anton";
    else if(dcnt>acnt)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;
}
