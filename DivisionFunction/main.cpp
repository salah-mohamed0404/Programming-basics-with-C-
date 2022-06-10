#include <iostream>

using namespace std;

template<class...t>
auto left_div(t ... args){
    return (1.0/.../args);
}

template<class...t>
auto right_div(t ... args){
    return (args/.../1.0);
}

int main()
{
    int x,y,z;

    cin>>x>>y>>z;
    cout<<left_div(x,y,z)<<" "<<right_div(x,y,z);

    return 0;
}
