#include <iostream>

using namespace std;

void sortstr(string &s,int len){
    int tmp;
    for(int i=0; i<len-1; i++){
        for(int j=i+1; j<len; j++){
            if(s[i]>s[j]){
                tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;

    string s;
    while(t--){
        cin>>s;
        sortstr(s,s.size());
        cout<<s<<endl;
    }
    return 0;
}
