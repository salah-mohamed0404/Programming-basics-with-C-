#include <iostream>

using namespace std;

void sort2d(int farr[],int larr[],int len){
    for(int i = 0 ; i<len-1 ; i++){
        for(int j = i+1 ; j<len ; j++){
            if(farr[j]>farr[i]){
                int temp = farr[i];
                farr[i]=farr[j];
                farr[j]=temp;

                int temp2 = larr[i];
                larr[i]=larr[j];
                larr[j]=temp2;
            }
        }
    }
}
/*
8 2
S 50 10
B 100 2
S 50 2
B 60 3
S 50 3
B 60 2
S 10 5
B 5 2
*/
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

    char a;
    int farr[n],farr2[n];
    int larr[n],larr2[n];

    int bbcnt{0},sscnt{0},t=n,m{0},k{0};
    while(t--){
        cin>>a;
        if(a=='S'){
            cin>>farr[m]>>larr[m];
            m++;
        }

        if(a=='B'){
            cin>>farr2[k]>>larr2[k];
            k++;
        }
    }

    sort2d(farr,larr,m);
    sort2d(farr2,larr2,k);
//    for(int i = 0 ; i<n ; i++){
//
//        for(int j = 0 ; j<n ; j++){
//            if(farr[i]>farr[j]){
//                int temp = farr[j];
//                farr[j]=farr[i];
//                farr[i]=temp;
//
//                int temp2 = larr[j];
//                larr[j]=larr[i];
//                larr[i]=temp2;
//
//                int temp3 = carr[j];
//                carr[j]=carr[i];
//                carr[i]=temp3;
//            }
//        }
//    }


    int send=s,bend=s;
    if(n<s){
        send=m;
        bend=k;
    }
    if(k==0)
        bend=0;
    if(m==0)
        send=0;

//    for(int i = 0 ; i <m ; i++){
//
//        cout<<"S "<<farr[i]<<" "<<larr[i]<<endl;
//    }


        int scnt{0},bcnt{0};
        for(int i=0; i<m&&scnt<send; i++){
            int v=larr[i],j;

            for( j=i+1; j<m; j++){
                if(farr[i]==farr[j]){
                    v+=larr[j];
                }
                else
                    break;
            }
            cout<<"S "<<farr[i]<<" "<<v<<endl;
            scnt++;
            i=j-1;
        }

        for(int i=0; i<k&&bcnt<bend; i++){
            int v=larr2[i],j;

            for( j=i+1; j<k; j++){
                if(farr2[i]==farr2[j]){
                    v+=larr2[j];
                }
                else
                    break;
            }
            cout<<"B "<<farr2[i]<<" "<<v<<endl;
            bcnt++;
            i=j-1;
        }


    return 0;
}
