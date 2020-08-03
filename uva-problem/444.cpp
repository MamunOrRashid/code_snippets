#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch1[1000];
    int i,len,temp,sum;

    while(gets(ch1))
    {
        len=strlen(ch1);
        sum=0;
        for(i=len-1; i>=0; i--)
        {
            if((ch1[i]-'0')>=0 && (ch1[i]-'0')<=9)
            {
                sum=sum*10+ch1[i]-'0';
                if(sum<65 && sum>=32)
                {
                    printf("%c",sum);
                    sum=0;
                }
                else if(sum>=65 && sum<=99)
                {
                    printf("%c",sum);
                    sum=0;
                }
                else if(sum>=100 && sum<=122)
                {
                    printf("%c",sum);
                    sum=0;
                }
            }
            else
            {
                temp=ch1[i];
                while(temp!=0)
                {
                    printf("%d",temp%10);
                    temp=temp/10;
                }
            }
        }

        printf("\n");
    }
    return 0;
}


/**#include<cstring>
#include<iostream>
#include<cstdio>
#include <algorithm>
int reverse(int j);
using namespace std;
int main()
{
    char input[1000];
    int i,len,n;
    while (cin.getline(input,1000))
    {
        n = 0;
        if ( (input[0] -48) >= 0 && input[0]-48 <= 9)
        {
            len = strlen(input);
            reverse(input, input+len);
            for (i = 0; input[i]; ++i)
            {
                n = n * 10 + input[i]-48;
                if ( (n >= 65 && n <= 90) || (n >= 97 && n <= 122) || n == 32 || n == 33
                        ||n == 44 || n == 46 || n == 58 || n == 59 || n == 63)
                {
                    printf("%c",n);
                    n = 0;
                }
            }
        }
        else for (i=strlen(input)-1; i>=0; i--)
            {
                int j=input[i];
                reverse(j);
            }
        printf("\n");
    }
    return 0;
}
int reverse(int j)
{
    int b;
    int sum=0;
    while (j>0)
    {
        b=j%10;
        printf("%d",b);
        j=j/10;
    }
    return sum;
}
*/
