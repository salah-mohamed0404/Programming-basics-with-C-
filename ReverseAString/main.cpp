#include <iostream>

using namespace std;

string reverse_str(const string &str){
    string reversed_str=str;
   int st=0, en=(int)str.size()-1;
   while(st<en){
    char tmp =reversed_str[en];
    reversed_str[en]=reversed_str[st];
    reversed_str[st]=tmp;

    st++, en--;
   }
   return reversed_str;
}

int main()
{
    string str;
    cin>>str;
    cout<<reverse_str(str);

    return 0;
}
