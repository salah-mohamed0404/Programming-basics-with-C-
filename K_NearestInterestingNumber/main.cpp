#include <iostream>

using namespace std;

int main()
{
    int b;
    cin>>b;

    for(int i=b; ;i++){
        int tmp=i,sum{0};

        while(tmp){
            sum+=(tmp%10);
            tmp/=10;
        }
        if(sum%4==0){
            cout<<i;
            break;
        }
    }
    return 0;
}
