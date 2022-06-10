#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int i=n-1,Cstar=1,j=1;
        while(i>0)
        {
            cout<<" ";
            if(i==1)
                {
                    while(j<=Cstar)
                    {
                        cout<<"*";
                        j++;
                    }
                }
            i--;
        }
        cout<<endl;
        Cstar++;
        n--;
    }
    return 0;
}
