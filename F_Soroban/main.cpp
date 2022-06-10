#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int tmp;
    do{
        tmp=num%10;
        if(tmp==0)
            cout<<"O-|-OOOO"<<endl;
        else if(tmp==1)
            cout<<"O-|O-OOO"<<endl;
        else if(tmp==2)
            cout<<"O-|OO-OO"<<endl;
        else if(tmp==3)
            cout<<"O-|OOO-O"<<endl;
        else if(tmp==4)
            cout<<"O-|OOOO-"<<endl;
        else if(tmp==5)
            cout<<"-O|-OOOO"<<endl;
        else if(tmp==6)
            cout<<"-O|O-OOO"<<endl;
        else if(tmp==7)
            cout<<"-O|OO-OO"<<endl;
        else if(tmp==8)
            cout<<"-O|OOO-O"<<endl;
        else if(tmp==9)
            cout<<"-O|OOOO-"<<endl;
        num/=10;
    }
    while(num);

    return 0;
}
