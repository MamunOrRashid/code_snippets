#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    int n,flag=0,i,rev,p,sum;
    while(scanf("%d",&n)!=EOF)
    {
        p=n;
        if(n==1)
        {
            printf("2\n");
            break;
        }
        if(n==2)
        {
            printf("4\n");
            break;
        }
        sum=sqrt(n);
        for(i=2; i<=sum; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)printf("%d\n",2*n);
        else if(flag==0)
        {
            rev=0;
            while(n!=0)
            {
                rev=rev*10+(n%10);
                n=n/10;
            }
        }
        if(p==rev)
        {
            printf("%d\n",2*p);
            break;
        }
    }
    return 0;
}
