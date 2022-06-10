#include <iostream>

using namespace std;

int main()
{
    int indx, b[201] {0};
    cin>>indx;

    int value=0;
    for(int i=0; i<=indx; i++)
    {
        if(i==0)
            value=0;

        else if(i==1)
            value=1;

        else if((value-i)>0&&b[value-i]==0)
            value=value-i;

        else
            value=value+i;

        b[value]++;
    }

    cout<<value;

    return 0;
}
