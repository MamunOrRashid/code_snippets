#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int palindrome(char *s1)
{

    int l=strlen(s1);
    for(unsigned int p=0; p<l; p++)
    {
        if(s1[p]!=s1[l-p-1])
            return 0;
    }
    return 1;
}

int next_prime(int from)
{
    bool flag=1;

    for(int i=from+1;; i++)
    {
        for(int j=i-1; j>1; j--)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return i;

        flag=1;
    }
}

int main()
{
    int no,times;
    cout<<"Enter a Number:";
    cin>>no;
    cout<<"How many Prime Palindromes do you want after "<<no<<":";
    cin>>times;
    char str[10];
    int p=no;
    while(times)
    {
        itoa(p,str,10);

        if(palindrome(str)==1)
        {
            cout<<p<<endl;
            times--;
        }
        p=next_prime(p);
    }
    cout<<"--> Written by born2c0de <--"<<endl;
    cout<<"--> born2c0de AT hotmail.com <--"<<endl;
}
