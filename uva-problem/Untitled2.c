#include <stdio.h>

int main()
{
    unsigned int n,d,v,u,i;
    double t1,t2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%u%u%u",&d,&v,&u);
        t1=(double)d/sqrt(u*u-v*v);
        t2=(double)d/(double)u;
        if(u<=v || u==0 ||v==0)printf("can't determine\n");
        printf("Case %d: %.3lf\n",i,t1-t2);
    }
    return 0;
}
