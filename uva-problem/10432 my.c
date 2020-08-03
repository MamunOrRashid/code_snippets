#include <stdio.h>
#include <math.h>

int main()
{
    double pi,r,n,area;
    while(scanf("%lf%lf",&r,&n)!=EOF){
        pi=acos(-1);
        area=.5*r*r*sin((2*pi)/n);
        printf("%.3lf\n",(area*n));
    }
    return 0;
}
