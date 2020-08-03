#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    unsigned long int n,h,k,sum,n1,sum1;
    int x,i,check;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%ld",&n);

        if(n==0)printf("1 0\n");
        h=n;
        i=0;
        sum=check=0;
        while(n!=0)
        {
            sum=sum*10+n%10;
            n=n/10;
            if(n==0)
            {
                n1=h+sum;
                k=n1;
                sum1=0;
                i++;
                while(n1!=0)
                {
                    sum1=sum1*10+n1%10;
                    n1=n1/10;
                    if(n1==0 && k==sum1)
                    {
                        printf("%d %lu\n",i,k);
                        check=1;
                        break;
                    }
                    if(n1==0 && k!=sum1)
                    {
                        i++;
                        n1=k+sum1;
                        k=n1;
                        sum1=0;
                    }
                }
                if(check==1)break;
            }
        }
    }
    return 0;
}
