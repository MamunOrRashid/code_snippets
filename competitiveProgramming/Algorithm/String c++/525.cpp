#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1="mamun";
    string str2="ashid";
    string str3;

    str3=str1;
    cout<<str2<<endl<<str3<<endl;

    str3=str1+str2;
    cout<<str3<<endl;

    if(str3>str2)cout<<"str3>str2"<<endl;

    return 0;
}
