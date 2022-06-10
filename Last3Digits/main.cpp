#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    if(num<10000)
        cout<<"this is a small number";
    else
    {
        int n1=num%10,n2=(num/10)%10,n3=(num/100)%10;
        int sum=n1+n2+n3;
        if(sum%2!=0)
            cout<<"this is a great number";
        else
        {
            if((n1%2!=0)||(n2%2!=0)||(n3%2!=0))
                cout<<"this is a good number";
            else
                cout<<"this is a bad number";
        }

    }
    return 0;
}
