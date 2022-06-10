#include <iostream>

using namespace std;

int main()
{
    int num,h;
    cin>>num>>h;

    int ah,w{0};
    for(int i=0; i<num; i++){
        cin>>ah;
        if(ah>h)
            w+=2;
        else
            w++;
    }

    cout<<w;

    return 0;
}
