#include <iostream>

using namespace std;

int main()//that program print 4th digit from the end
{
    int n;
    cin>>n;
    int x=n/1000;//remove last 3 digits
    cout<<x%10;//print the 4th digit
    /* or better way
    keep all before line 8 and replace all after by
    cout<<(n/1000)%10;
    */
    return 0;
}
