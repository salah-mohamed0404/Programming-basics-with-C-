#include <bits/stdc++.h>//every thing in it

#define el '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

int j{0},k{0};

void ssort(int n[][2])
{
    int tmp,tmp2;
    for(int i=0; i<j-1; i++){
        for(int h=i+1; h<j; h++){
            if(n[h][0]>n[i][0]){
                tmp=n[i][0];
                n[i][0]=n[h][0];
                n[h][0]=tmp;

                tmp2=n[i][1];
                n[i][1]=n[h][1];
                n[h][1]=tmp2;

            }
        }
    }
}

void bsort(int n[][2])
{
    int tmp,tmp2;
    for(int i=0; i<k-1; i++){
        for(int h=i+1; h<k; h++){
            if(n[h][0]>n[i][0]){
                tmp=n[i][0];
                n[i][0]=n[h][0];
                n[h][0]=tmp;

                tmp2=n[i][1];
                n[i][1]=n[h][1];
                n[h][1]=tmp2;

            }
        }
    }
}

int main()
{
     int n,s;
     cin>>n>>s;

     char x;
     int y,z;
     if(n==1){
        cin>>x>>y>>z;
        cout<<x<<" "<<y<<" "<<z;
        return 0;
     }

     int ns[n][2],nb[n][2],t=n,fsp[100001] {0},fbp[100001] {0};
     char a;
     while(t--){
        cin>>a;
        if(a=='S'){
            cin>>ns[j][0]>>ns[j][1];
            fsp[ns[j][0]]++;
            j++;
        }
        else{
            cin>>nb[k][0]>>nb[k][1];
            fbp[nb[k][0]]++;
            k++;
        }
     }
     int send=s,bend=s;
     if(n<s){
        send=j;
        bend=k;
     }

     ssort(ns);
     bsort(nb);

//     for(int i=0; i<j; i++)
//        cout<<"S "<<ns[i][0]<<" "<<ns[i][1]<<el;
//    for(int i=0; i<k; i++)
//        cout<<"B "<<nb[i][0]<<" "<<nb[i][1]<<el;

    int ss{0},sflag=0,is_neq=1,vs,cnt{0},is_c2=1;
    for(int i=0; i<j||ss<send; i++){
        if((ns[i][0]==ns[i+1][0])&&i==0){
            is_c2=0;
            continue;
        }
        if(ns[i-1][0]==ns[i][0]){
            vs=ns[i-1][1]+ns[i][1];
            cnt+=2;
            sflag=1;
            is_neq=0;
        }
        if(sflag&&cnt==(fsp[ns[i-1][0]])&&i>0){
            cout<<"S "<<ns[i-1][0]<<" "<<vs<<el;
            sflag=0;
            is_neq=1;
            cnt=0;
            ss++;
            if(ns[i+2][0]==ns[i+1][0]){
                i++;
                is_neq=0;
            }
            continue;
        }

        if(is_neq&&is_c2){
            cout<<"S "<<ns[i][0]<<" "<<ns[i][1]<<el;
            ss++;
            continue;
        }
        if(is_neq){
            cout<<"S "<<ns[i][0]<<" "<<ns[i][1]<<el;
            ss++;
        }

    }

    int sb{0},bflag=0,is_neq2=1,vb,cnt2{0},is_c=1;
    for(int i=0; sb<bend; i++){
        if((nb[i][0]==nb[i+1][0])&&i==0){
            is_c=0;
            continue;
        }
        if(nb[i-1][0]==nb[i][0]){
            vb=nb[i-1][1]+nb[i][1];
            cnt2+=2;
            bflag=1;
            is_neq2=0;
        }
        if(bflag&&cnt2==fbp[nb[i-1][0]]){
            cout<<"B "<<nb[i-1][0]<<" "<<vb<<el;
            bflag=0;
            is_neq2=1;
            cnt2=0;
            sb++;
            if(nb[i+2][0]==nb[i+1][0]){
                i++;
                is_neq2=0;
            }
            continue;
        }

        if(is_neq2&&is_c){
            cout<<"B "<<nb[i][0]<<" "<<nb[i][1]<<el;
            sb++;
            continue;
        }
        if(is_neq2){
            cout<<"B "<<nb[i-1][0]<<" "<<nb[i-1][1]<<el;
            sb++;
        }

    }


    return 0;
}
