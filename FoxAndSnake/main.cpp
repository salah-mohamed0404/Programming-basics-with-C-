#include <iostream>

using namespace std;

int main()//this program draws a snake based on the matrix style
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)//rows counter
    {
        for(int j=1;j<=m;j++)//columns counter
        {
            if(i%4==0)//condition for # before dots
            {
                if(j==1)
                    cout<<"#";
                else
                    cout<<".";
            }
            else if(i%4==2)//condition for # after dots
            {
                if(j==m)
                    cout<<"#";
                else
                    cout<<".";
            }
            else//just for case # columns only
                cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}
