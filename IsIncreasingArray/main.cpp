#include <iostream>

using namespace std;

int main()//check if array increasing or not
{
    int numbers[200],n,ck=0;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>numbers[i];
    for(int j=1;j<n;j++)
        {
            if(numbers[j]<numbers[j-1])
                {
                    cout<<"NO";
                    ck++;
                    break;
                }
        }
    if(ck==0)
        cout<<"YES";
    return 0;
}
