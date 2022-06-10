#include <iostream>

using namespace std;

int main()
{
    int n,N;
    float r;
    cin>>n>>N;
    r = n%N;
    cout<<r/N;
    /*  OR
    double a,b;
    cin>>a>>b;
    double r = a/b;
    cout<<r - {int}r;
    */
    return 0;
}
