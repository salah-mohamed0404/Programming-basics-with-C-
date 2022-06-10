#include <iostream>

using namespace std;

int main()
{
    const int N=500+1;
    int n,q,x,ans[N];

    for(int i=0;i<n;i++)
        ans[i]=-1;

    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            ans[x]=i;//takes a num in idx and the position in array
        }
        int num;
        cin>>q;
        while(q--)
        {
            cin>>num;
            cout<<ans[num]<<endl;//when we call the array with the number it present the last position
        }

    return 0;
}
