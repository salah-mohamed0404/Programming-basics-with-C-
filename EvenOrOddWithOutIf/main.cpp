#include <iostream>

using namespace std;

int main()//that program define if that number is even or odd with out if by three ways
{
    int num;
    cin>>num;
    //first and easiest way by "%2"
    bool is_even1=(num%2==0);

    //second way by defining that fractional part is zero or not
    float x= {float} num/2.0;
    float x-= {int} x;
    bool is_even2=(x==0);

    //third way by separate last number and see if it 0,2,4,6,8(devisiable by 2 )
    int y=num%10;
    bool is_even3=((num==2)||(num==4)||(num==6)||(num==8));
    cout<<is_even1<<is_even2<<is_even3;
    return 0;
}
