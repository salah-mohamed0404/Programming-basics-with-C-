#include <iostream>

using namespace std;

int main()//this program read number and find the numbers from
//0 to the number that make the condition in line 13 true
{
    int End,i=0;
    cin>>End;

    while(i<=End)
    {
        if(i%8==0||i%3==0&&i%4==0)
            cout<<i<<" ";
        i++;
    }
    return 0;
}
