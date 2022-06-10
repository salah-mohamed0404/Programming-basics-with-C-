#include <iostream>

using namespace std;

int cnt{0};
int len_3n_plus_1(int x){

    if(x==1)
        return cnt+1;

   if(x%2==0){
        cnt++;
        len_3n_plus_1(x/2);
    }
    else{
        cnt++;
        len_3n_plus_1(3*x+1);
    }
}

int main()
{
    int n;
    cin>>n;

    cout<<len_3n_plus_1(n);

    return 0;
}
