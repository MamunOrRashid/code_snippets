#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1="this isa test";
    string str2="ABCDEFG";

   /** cout<<"insert str2 into str1:"<<endl;
    str1.insert(5,str2);
    cout<<str1<<endl<<endl;

    cout<<"remove 7 character from str1:"<<endl;
    str1.erase(5,6);
    cout<<str1<<endl<<endl;*/

    cout<<"replace 2 characters in str1 with str2:"<<endl;
    str1.replace(5,3,str2);
    cout<<str1<<endl<<endl;
    return 0;
}

