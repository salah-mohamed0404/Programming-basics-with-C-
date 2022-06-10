#include <iostream>

using namespace std;

int main()
{
    int n,m,num,is_prime[100][100]{0},flag=1;
    cin>>n>>m,num;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            cin>>num;

            if(num<=1)
                continue;

            for(int k=2; k<num/2; k++)
                if(num%k!=0){
                    flag=0;
                }
            if(flag)
                is_prime[i][j]=1;
    }

    int q,ni,nj,r,c;
    cin>>q;

    while(q--){
        cin>>ni>>nj>>r>>c;
        int cnt=0;
        for(int i=ni; i<r; i++)
            for(int j=nj; j<c; j++)
                cnt+=is_prime[i][j];
        cout<<cnt<<endl;
    }

    return 0;
}
