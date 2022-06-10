#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<n+((n+1)*((n/2)-1)+((n%2)*((n/2)+1)+1));//or abetter equation n*(n+1)/2
    return 0;
}
