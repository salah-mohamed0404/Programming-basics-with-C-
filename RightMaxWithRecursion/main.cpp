#include <iostream>

using namespace std;

void right_max(int a[],int len, int start){
    if(start==len-1)
        return;

    right_max(a,len,start+1);
    a[start]=max(a[start],a[start+1]);
}

//void right_max(int a[],int len){
//    if(len==1)
//        return;
//
//    right_max(a+1,len-1);
//    a[0]=max(a[0],a[1]);
//}

int main()
{
    int a[100],len;

    cin>>len;
    for(int i=0; i<len; i++)
        cin>>a[i];

    right_max(a,len-1,0);

    for(int i=0; i<len; i++)
        cout<<a[i]<<" ";
    return 0;
}
