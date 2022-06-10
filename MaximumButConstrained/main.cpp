#include <iostream>

using namespace std;

int main()//that program find the max of three numbers but max must be <100
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

    if(num1>num2)
    {
        if (num1>num3)
        {
            if(num1<100)
                cout<<num1;
            else if(num2>num3)
            {
                if(num2<100)
                    cout<<num2;
                else if(num3<100)
                    cout<<num3;
                else
                    cout<<"-1";
            }

        }
        else
        {
            if(num3<100)
                cout<<num3;
            else if(num1<100)
                cout<<num1;
            else if(num2<100)
                cout<<num2;
            else
                cout<<"-1";
        }

    }
    else
    {
        if(num2>num3)
        {
            if(num2<100)
                cout<<num2;
            else if (num3>num1&&num3<100)
                cout<<num3;
            else if(num1<100)
                cout<<num1;
            else
                cout<<"-1";
        }
        else
        {
            if(num3<100)
                cout<<num3;
            else if(num2<100)
                cout<<num2;
            else if(num1<100)
                cout<<num1;
            else
                cout<<"-1";
        }
    }
    return 0;
}
