#include <iostream>

using namespace std;

float ave(int a[],int len){
    if(len==1)
        return a[0];

    float sup_res=ave(a,len-1);

    sup_res=sup_res*(len-1);

    return (sup_res+a[len-1])/len;
}

int main()
{
    int a[]{1,8,2,10,3};
    cout<<ave(a,5);
    return 0;
}
