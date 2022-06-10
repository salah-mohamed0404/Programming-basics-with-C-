#include <iostream>

using namespace std;

int main()
{
    float g1,g2;
    int id1,id2;
    string n1,n2;
    cout<<"what is student 1 name:";
    cin>>n1;
    cout<<"his id:";
    cin>>id1;
    cout<<"his math exam grade:";
    cin>>g1;
    cout<<"what is student 2 name:";
    cin>>n2;
    cout<<"his id:";
    cin>>id2;
    cout<<"his math exam grade:";
    cin>>g2;
    cout<<"students grades in math\n"<<n1<<" (with id "<<id1<<") got grade:" <<g1<<"\n";
    cout<<n2<<" (with id "<<id2<<") got grade:" <<g2<<"\n";
    cout<<"AVG="<<(g1+g2)/2<<"\n";
    return 0;
}
