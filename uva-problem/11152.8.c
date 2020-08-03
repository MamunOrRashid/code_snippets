
#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,red,violets,yellow,s,area,R,r;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3){
        if(a>0 && a<=b && b<=c && c<=1000){
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            r=((2*area)/(a+b+c));
            R=((a*b*c)/(4*area));
            red=(3.141592653589793*r*r);
            violets=area-red;
            yellow=(3.141592653589793*R*R)-area;


            printf("%.4lf %.4lf %.4lf\n",yellow,violets,red);
        }

    }
    return 0;
}
