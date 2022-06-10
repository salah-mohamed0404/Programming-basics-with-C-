#include <iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;

    year++;
    while(true){
        int n1,n2,n3,n4;
        n1=year%10;
        n2=(year/10)%10;
        n3=(year/100)%10;
        n4=(year/1000)%10;

        if((n1!=n2)&&(n1!=n3)&&(n1!=n4)&&(n2!=n3)&&(n2!=n4)&&(n3!=n4)){
            cout<<year;
            break;
        }

        year++;
    }
    return 0;
}
