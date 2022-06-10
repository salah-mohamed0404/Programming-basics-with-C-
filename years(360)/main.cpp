#include <iostream>

using namespace std;

int main()//that program assume that year 12 month and every month 30days and read user's age in days and output
//total years,total months,remaining days
{
    int age_days;
    cin>>age_days;
    int years=age_days/360;
    int months=(age_days-(years*360))/30;
    int days=age_days-(years*360)-(months*30);
    //or we can use %
    cout<<years<<" "<<months<<" "<<days;
    return 0;
}
