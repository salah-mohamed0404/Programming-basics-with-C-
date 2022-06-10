#include <iostream>

using namespace std;

int main()
{
    int n,a[100][100];
    cin>>n;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    //the upper triangle
    int upper_sum{0};
    for(int r=0; r<n; r++)
        for(int c=0; c<n; c++){
        if(c<r)
            continue;
        upper_sum+=a[r][c];
    }

    //the lower triangle
    int lower_sum{0};
    for(int r=0; r<n; r++)
        for(int c=0; c<n; c++){
            if(c>r)
                continue;
            lower_sum+=a[r][c];
    }

    cout<<"The sum of lower triangle is "<<lower_sum
    <<" The sum of upper triangle is "<<upper_sum;

    return 0;
}
