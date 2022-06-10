#include <iostream>
#include <algorithm>

using namespace std;

int main()
{


    int n;
    cin>>n;

    int frq[10000]={0};
    frq[0]=1;
    frq[1]=1;

    int arr[500];
    arr[0]=0;
    arr[1]=1;

    for(int i = 1 ; i <= n ; i++){
        if(arr[i]-i-1>0&&frq[arr[i]-i-1] == 0)
            arr[i+1]=arr[i]-i-1;
        else
            arr[i+1]=arr[i]+i+1;

        frq[arr[i+1]]++;
    }

    for(int j = 0 ;j < n ;j++){
        cout<<arr[j]<<" ";
        }

    return 0;
}
