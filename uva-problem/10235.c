#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int N,i,sum,flag,sum1,yes,j,reverse,x;
    while(scanf("%d",&N)!=EOF)
    {
        reverse=0;
        yes=0;
        flag=0;
        if(N==2 || N==3 || N==5 || N ==7)printf("%u is prime\n",N);
        else if(N>7)
        {
            sum=sqrt(N);
            for(i=2; i<=sum; i++)
            {
                if(N%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)printf("%u is not prime.\n",N);
            else
            {
                x=N;
                while(N!=0)
                {
                    reverse = reverse * 10;
                    reverse = reverse + N%10;
                    N = N/10;
                }
                sum1=sqrt(reverse);
                for(j=2; j<=sum1; j++)
                {
                    if(reverse%j==0)
                    {
                        yes=1;
                    }
                }
                if(reverse==x)printf("%u is prime.\n",x);
                else if(yes==0)printf("%u is emirp.\n",x);
                else printf("%u is prime.\n",x);
            }
        }
    }
    return 0;
}
