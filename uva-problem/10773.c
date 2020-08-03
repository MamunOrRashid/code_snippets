#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int d,v,u,tc,i;
    double t1,t2,yes;
    scanf("%u",&tc);
    for(i=1;i<=tc;i++){
        scanf("%u%u%u",&d,&v,&u);
        if(v==0||v>=u||u==0)printf("Case %u: can't determine\n",i);
        else
        {
            t1=(float)d/(float)u;

            t2=(float)d/(float)sqrt(u*u-v*v);
            yes=fabs(t2-t1);
            printf("Case %u: %.3lf\n",i,yes);
        }
    }
    return 0;
}
