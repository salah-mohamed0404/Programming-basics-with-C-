#include <iostream>

using namespace std;

void accum(int a[],int len){
    if(len==0)
        return;

    accum(a,len-1);
    a[len]+=a[len-1];
}

int main()
{
    int a[100],len;

    cin>>len;
    for(int i=0; i<len; i++)
        cin>>a[i];

    accum(a,len-1);
    for(int i=0; i<len; i++)
        cout<<a[i]<<" ";

    return 0;
}
