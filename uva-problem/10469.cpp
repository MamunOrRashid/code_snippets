#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
unsigned long int a,b,sum;
int main()
{
    int temp[4000],len1,len2,i,j,k,t;
    char ch1[4000],ch2[4000],ch3[4000],ch4[4000];
    while(scanf("%lu%lu",&a,&b)!=EOF)
    {

        for(i=0; a!=0; i++)
        {
            ch3[i]=a%2+'0';
            a=a/2;
        }
        for(t=i-1,k=0; t>=0; t--,k++) ch1[k]=ch3[t];
        ch1[k]='\0';

        for(i=0; b!=0; i++)
        {
            ch4[i]=b%2+'0';
            b=b/2;
        }
        for(t=i-1,k=0; t>=0; t--,k++) ch2[k]=ch4[t];
        ch2[k]='\0';

        len1=strlen(ch1);
        len2=strlen(ch2);

        for(i=len1-1,j=len2-1; i>=0||j>=0; i--,j--)
        {
            if(i<0)ch1[i]=0+'0';
            if(j<0)ch2[j]=0+'0';
            if(ch1[i]!=ch2[j])
            {
                if(i>j)temp[i]=1;
                else if(j>i)temp[j]=1;
                else temp[j]=1;
            }
            else if(ch1[i]==ch2[j])
            {
                if(i>j)temp[i]=0;
                else if(j>i)temp[j]=0;
                else temp[j]=0;
            }
        }
        if(len2>len1)swap(len1,len2);
        sum=0;
        for(i=len1-1,k=0; i>=0; i--,k++) sum = sum + temp[i]*pow(2,k);
        printf("%lu\n",sum);
    }

    return 0;
}
