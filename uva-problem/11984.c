#include <stdio.h>

int main()
{
    int T,i;
    double F,C,d,sum,sum1;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf%lf",&C,&d);
        F=(1.8*C)+32;
        sum=F+d;
        sum1=(sum-32)/1.8;
        printf("Case %d: %.2lf\n",i,sum1);
    }
    return 0;
}
