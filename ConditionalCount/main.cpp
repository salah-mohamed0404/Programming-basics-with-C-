#include <iostream>

using namespace std;

int main()//that program calculate how many number <=x
//and >x
{
    int x,n1,n2,n3,n4,n5;
    int before10=0,after10=0;//temp variables

    cin>>x;
    cout<<endl;
    cin>>n1>>n2>>n3>>n4>>n5;

    if(n1<=x)//we can use this too "before10+=(n1<=x);"
        before10++;
    if(n2<=x)
        before10++;
    if(n3<=x)
        before10++;
    if(n4<=x)
        before10++;
    if(n5<=x)
        before10++;

    after10=5-before10;
    cout<<before10<<" "<<after10;
    return 0;
}
