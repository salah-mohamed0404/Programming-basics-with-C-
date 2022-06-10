#include <iostream>

using namespace std;

int main()
{
    int c,ido,num,bo,csum{0};
    cin>>c>>ido>>num;

    for(int i=1; i<=num; i++)
        csum+=i*c;

    if(ido>csum)
        cout<<"0";
    else
        cout<<csum-ido;

    return 0;
}
