#include <iostream>

using namespace std;

int main()
{
    int tic[100][100]{0},n;

    cout<<"Enter grid dimension: ";
    cin>>n;

    int rs[100], cs[100], dr[100], dc[100], verify{0};

    for(int i=0; i<n; i++){
        rs[verify]=i; cs[verify]=0; dr[verify]=0; dc[verify++]=1;
    }

    for(int j=0; j<n; j++){
        rs[verify]=0; cs[verify]=j; dr[verify]=1; dc[verify++]=0;
    }

    rs[verify]=0, cs[verify]=0, dr[verify]=1, dc[verify++]=1;
    rs[verify]=0, cs[verify]=n-1, dr[verify]=1, dc[verify++]=-1;

    int turn{0},steps{0};
    while(true){
        if(steps==n*n){
            cout<<"Tie";
            break;
        }
        char sym='x';
        if(turn==1)
            sym='o';

        cout<<"-------------------------------------------------------------------------\n";
        cout<<"Player "<<sym<<" turn Enter empty location (r,c): ";
        int row{0}, col{0};

        cin>> row>> col;
//        cout<<"R : "<<row<<" C: "<<col<<endl;

        row-=1,col-=1;

        if(row<0||row>=n||col<0||col>=n||tic[row][col]!=0){
            cout<<"Invalid input again \n";
            continue;
        }

        tic[row][col]=turn+1;

//        cout<<"tic \n";
//         for(int i=0; i<n; i++){
//            for(int j=0; j<n; j++){
//                    cout<<tic[i][j]<<" ";
//            }
//            cout<<endl;
//         }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                char ch='.';
                if(tic[i][j]==1)
                    ch='x';
                else if(tic[i][j]==2)
                    ch='o';
                cout<<ch;
            }
            cout<<endl;
        }

        for(int check=0; check<verify; check++){
            int nr=rs[check], nc=cs[check], rd=dr[check], cd=dc[check];
            int cnt{0}, first=tic[nr][nc];

            if(first==0)
                continue;

            for(int step=0 ;step<n; step++, nr+=rd, nc+=cd)
                cnt+=tic[nr][nc]==first;

            if(cnt==n){
                cout<<"Player "<<sym<<" won \n";
                return 0;
            }
        }

        turn=!turn;
        steps++;

    }

    return 0;
}
