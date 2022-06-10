#include <iostream>

using namespace std;

int main()
{
    int t,x;
    cin>>t;

    int tmp;
    while(t--)
    {
       cin>>x;
       if(x<10)
       {
           cout<<x<<endl;
           continue;
       }

       for(int i=x; x<=987654321; i++)
       {
           int sum{0};
           for(int tmp=i,is_uni=1; tmp>0;tmp/=10)
           {
               if(tmp/10!=0)
               {
                   if(tmp==tmp%10)
                   {
                       is_uni=0;
                       break;
                   }
               }
               if(is_uni==0)
                break;
               sum+=tmp%10;
           }
           if(sum==x)
           {
               cout<<i<<endl;
               break;
           }

       }
    }
    return 0;
}
