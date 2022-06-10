#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int n1=x%10;//last number
    int n2=(x/10)%10;//last 2th number
    int n3=(x/100)%10;//last 3th number
    cout<<n1+n2+n3;//sum of the three numbers
    return 0;
}
