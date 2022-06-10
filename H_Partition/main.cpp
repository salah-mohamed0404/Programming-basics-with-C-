#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cin>>n;

    int b{0},c{0};
    for(int i=0; i<n; i++){
        cin>>a;

        if(a>=0)
            b+=a;
        else
            c+=a;
    }

    cout<<b-c;
    return 0;
}
