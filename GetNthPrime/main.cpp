#include <iostream>

using namespace std;

bool is_prime(int a){
    if(a<=1)
        return false;

    for(int i=2; i<a/2; i++)
        if(a%i==0)
            return false;

    return true;
}

int nth_prime(int a){
    for(int i=2; ;i++){
        if(is_prime(i)){
            a--;
            if(a==-1)
                return i;
        }
    }
}
int main()
{
    int a;
    cin>>a;

    cout<<nth_prime(a);
    return 0;
}
