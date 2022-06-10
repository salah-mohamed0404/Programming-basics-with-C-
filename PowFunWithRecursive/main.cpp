#include <iostream>

using namespace std;

int my_pow(int n,int p){
    if(p==0)
        return 1;

    return n*my_pow(n,p-1);
}

int main()
{
    int n,p;
    cin>>n>>p;

    cout<<my_pow(n,p);

    return 0;
}
