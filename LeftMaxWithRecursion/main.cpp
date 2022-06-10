#include <iostream>

using namespace std;

void left_max(int a[],int len){
    if(len==0)
        return;

    left_max(a,len-1);
    a[len]=max(a[len],a[len-1]);
}

int main()
{
    int a[100],len;

    cin>>len;
    for(int i=0; i<len; i++)
        cin>>a[i];

    left_max(a,len-1);

    for(int i=0; i<len; i++)
        cout<<a[i]<<" ";

    return 0;
}
