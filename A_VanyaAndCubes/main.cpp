#include <iostream>

using namespace std;

int main()
{
    int cubes;
    cin>>cubes;

    int icubes{0}, i;
    for(i=1; icubes<=cubes; i++)
    {
        for(int j=1; j<=i; j++)
        {
            icubes+=j;
            if(icubes>cubes)
            {
                cout<<i-1;
                return 0;
            }
        }
    }

    cout<<i;
    return 0;
}
