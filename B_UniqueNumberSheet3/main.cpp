#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;


    while(t--){
        int num;
        cin>>num;

        int is=0;
        if(num>45){
            cout<<-1<<endl;
            is=1;
        }

        if(num<10){
            cout<<num<<endl;
            is=1;
        }

        if(num==45){
            cout<<123456789<<endl;
            is=1;
        }

        for(int i=1; i<=9&&is==0; i++){
            for(int j=2; j<=9&&is==0; j++){
                if(i+j==num&&!(i==9&&j==9)){
                    cout<<i<<j<<endl;
                    is=1;
                }
                if(j==9&&is==0&&i==9){
                    j=8;
                    for(int k=1; k<=7&&is==0; k++){
                        if(i+j+k==num){
                            cout<<k<<j<<i<<endl;
                            is=1;
                        }
                        if(k==7&&is==0){
                            for(int m=1; m<=6; m++){
                                if(i+j+k+m==num){
                                    cout<<m<<k<<j<<i<<endl;
                                    is=1;
                                }
                                if(m==6&&is==0){
                                    for(int n=1; n<=5; n++){
                                        if(i+j+k+m+n==num){
                                            cout<<n<<m<<k<<j<<i<<endl;
                                            is=1;
                                        }
                                        if(n==5&&is==0){
                                            for(int b=1; b<=4&&is==0; b++){
                                                if(i+j+k+m+n+b==num){
                                                    cout<<b<<n<<m<<k<<j<<i<<endl;
                                                    is=1;
                                                }
                                                if(b==4&&is==0){
                                                    for(int v=1; v<=3&&is==0; v++){
                                                        if(i+j+k+m+n+b+v==num){
                                                            cout<<v<<b<<n<<m<<k<<j<<i<<endl;
                                                            is=1;
                                                        }
                                                        if(v==3&&is==0){
                                                            for(int c=1; c<=2&&is==0; c++){
                                                                if(i+j+k+m+n+b+v+c==num){
                                                                    cout<<c<<v<<b<<n<<m<<k<<j<<i<<endl;
                                                                    is=1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

    }

    return 0;
}

