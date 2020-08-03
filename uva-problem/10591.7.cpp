#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t,i,n,p,x,sum=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        p=n;

        while(1)
        {
            sum=0;
            while(n!=0)
            {
                x=n%10;
                sum=sum+x*x;
                n=n/10;
            }
            n=sum;
            if(sum<10)
            {
                if(sum==1)printf("Case #%d: %d is a Happy number.\n",i,p);
                else if(sum!=1)printf("Case #%d: %d is an Unhappy number.\n",i,p);
                break;
            }
        }
    }
    return 0;
}
