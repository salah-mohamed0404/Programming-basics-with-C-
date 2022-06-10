#include <iostream>

using namespace std;

int main()
{
    int lin;
    cin>>lin;

    string num;
    cin>>num;

    int n1s{0},n0s{0};
    for(int i=0; i<lin; i++){

        if(num[i]=='1')
            n1s++;
        else
            n0s++;
    }
    cout<<((n1s>n0s)*(n1s-n0s))+((n0s>n1s)*(n0s-n1s));
    return 0;
}
