#include <iostream>

using namespace std;

int max_arr(int arr[],int len){
    if(len==1)
        return arr[0];

    int sup_res=max_arr(arr,len-1);
    return max(sup_res,arr[len-1]);
}

int main()
{
    int a[5]{1,8,2,10,3};

    cout<<max_arr(a,5);

    return 0;
}
