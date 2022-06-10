#include <iostream>

using namespace std;

int main()//this program calculate the average of the even
//positions and odd too
{
    int num,i;
    cin>>i;
    double x=0,y=0,even_sum=0,odd_sum=0;

    while(i>0)
    {
        cin>>num;

        if(i%2==0)
            {
            even_sum+=num;
            x++;
            }
        else
            {
            odd_sum+=num;
            y++;
            }
        i--;
    }

    cout<< even_sum/x<<" "<< odd_sum/y;
    return 0;
}
