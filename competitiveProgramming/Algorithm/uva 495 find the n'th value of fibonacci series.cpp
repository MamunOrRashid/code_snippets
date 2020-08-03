#include <bits/stdc++.h>
using namespace std;
string add(string x,string y);

int main()
{
    string number[5000];
    int n;
    number[0]="0";
    number[1]="1";
    for(int i=2;i<=5000;i++)
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
/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ch[100]={"mamun","or"};
    //ch[0]="mamun";
    cout<<ch[1]<<endl;
    return 0;
}
*/
