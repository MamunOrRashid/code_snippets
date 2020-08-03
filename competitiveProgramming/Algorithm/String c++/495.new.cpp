///it can find 1........................4000.
#include <bits/stdc++.h>
#define max 5000
using namespace std;
string add(string x,string y);

int main()
{
    string number[max];
    int n;
    number[0]="0";
    number[1]="1";
    for(int i=2;i<=max;i++)
        number[i]=add(number[i-1],number[i-2]);
    while(scanf("%d",&n)==1)
        printf("The Fibonacci number for %d is %s\n",n,number[n].c_str());

    return 0;
}

string add(string x,string y)
{
    string result;
    int digit_x,digit_y,carry=0,digit,temp;
    digit_x=x.length();
    digit_y=y.length();
    if(digit_x>digit_y) digit=digit_x;
    else digit=digit_y;
    while(digit>0)
    {
        temp=carry;
        if(--digit_x>=0) temp=temp+(x[digit_x]-'0');
        if(--digit_y>=0)  temp=temp+(y[digit_y]-'0');
        carry=temp/10;
        temp=temp%10;
        result.insert(result.begin(),temp+'0');
        --digit;
    }
   if(carry)result.insert(result.begin(),carry+'0');
    return result;
}
