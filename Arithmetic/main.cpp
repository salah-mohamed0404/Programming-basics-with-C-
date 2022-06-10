#include <iostream>

using namespace std;

int main()//this program calculate two numbers based on each
//number is even or odd
{
    int a,b;
    cin>>a>>b;

    bool is_bEven (b%2==0);//check if number 2 is even
    bool is_aEven (a%2==0);//check if number 1 is even

    if((is_bEven==0)&&(is_aEven==0))
        cout<<a*b;
    else if((is_bEven==1)&&(is_aEven==1))
        cout<<a/b;
    else if((is_aEven==0)&&(is_bEven==1))
        cout<<a+b;
    else
        cout<<a-b;
    return 0;
}
