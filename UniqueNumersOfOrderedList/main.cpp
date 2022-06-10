#include <iostream>

using namespace std;

int main()
{
    int n,numbers[1000];
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>numbers[i];

    for(int j=0;j<n;j++)
        if(numbers[j]!=numbers[j+1])
            cout<<numbers[j]<<" ";

    return 0;
}
