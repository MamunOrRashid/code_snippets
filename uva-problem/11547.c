#include <stdio.h>

int main()
{
    int t,n,i,sum,sum1,sum2,q,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        sum=(n*567)/9;
        sum1=((sum+7492)*235)/47;
        sum2=sum1-498;
        p=sum2%10;
        sum2=sum2/10;

        q=sum2%10;
        if(q<0)printf("%d\n",(q*(-1)));
        else{
            printf("%d\n",q);
        }
    }
    return 0;
}
