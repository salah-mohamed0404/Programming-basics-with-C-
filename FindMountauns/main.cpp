#include <iostream>

using namespace std;

int main()
{
    const int b=100;
    int a[b][b],r,c;
    cin>>r>>c;

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>a[i][j];

    int di[8]={1,0,-1,0,-1,1,-1,1};
    int dj[8]={0,1,0,-1,-1,1,1,-1};
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++){
            bool is_mount=true;

            for(int k=0; k<8; k++){
                int ni=i+di[k];
                int nj=j+dj[k];

                if(nj<0||nj>=c||ni<0||ni>=r)
                    continue;
                if(a[i][j]<=a[ni][nj]){
                    is_mount=false;
                    break;
                }
            }
            if(is_mount)
                cout<<i<<" "<<j<<endl;
        }

    return 0;
}
