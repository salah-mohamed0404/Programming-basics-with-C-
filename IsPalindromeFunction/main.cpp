#include <iostream>

using namespace std;

void is_palindrome(int numbers[],int n){
    int ck=0;
    for(int j=0;j<(n/2);j++)
            if(numbers[j]==numbers[n-j-1])
                ck++;
        if(ck==0)
            cout<<"NO";
        else
            cout<<"YES";
}

int main()
{
    int numbers[1000],n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>numbers[i];

    is_palindrome(numbers,n);

    return 0;
}
