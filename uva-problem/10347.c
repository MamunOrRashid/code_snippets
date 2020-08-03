#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,s,area,sum,yes;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
       if((a+b)<=c || (b+c)<=a || (c+a)<=b) printf("-1.000\n");
        else {
            s=(a+b+c)/2;
            yes=s*(s-a)*(s-b)*(s-c);
            area=sqrt(yes);
            sum=(area*4)/3;
            printf("%.3lf\n",sum);
        }
    }
    return 0;
}
