#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
using namespace std;

int main()
{
    string ch;
    int n,j,len,m,a,r,g,i,t;
    scanf("%d",&n);
    while(n--)
    {
        cin>>ch;
        len=ch.length();
        m=a=r=g=i=t=0;
        for(j=0; j<len; j++)
        {
            switch(ch[j])
            {
            case 'M':
                m++;
                break;
            case 'A':
                a++;
                break;
            case 'R':
                r++;
                break;
            case 'G':
                g++;
                break;
            case 'I':
                i++;
                break;
            case 'T':
                t++;
                break;
            }
        }
        int count=0;
        while(1)
        {
            if(m>=1 && a>=3 && r>=2 && g>=1 && i>=1 && t>=1)
            {
                count++;
                m=m-1;
                a=a-3;
                r=r-2;
                g=g-1;
                i=i-1;
                t=t-1;
            }
            else break;
        }
        cout<<count<<endl;
    }
    return 0;
}
