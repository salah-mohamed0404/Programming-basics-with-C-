#include <iostream>

using namespace std;

int main()//that program define if number is even or odd and print 100 if it even and print 7 if it odd without "if"
{
    int num;
    cin>>num;
    bool is_even((num%2)==0);
    bool is_odd((num%2)!=0);
    cout<<(100*is_even)+(7* is_odd);
    return 0;
}
