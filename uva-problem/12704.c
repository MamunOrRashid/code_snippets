#include <stdio.h>
#include <math.h>

int main()
{
    int T,i;
    double x,y,sum,r;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf%lf%lf",&x,&y,&r);
        sum=sqrt((x*x)+(y*y));
        if(x==0 &&y==0) printf("%.2lf %.2lf\n",r,r);
        else if(sum==r)printf("%.2lf %.2lf\n",(sum-sum),(sum+sum));
        else if(sum<r) printf("%.2lf %.2lf\n",(r-sum),(r+sum));
    }
    return 0;
}
