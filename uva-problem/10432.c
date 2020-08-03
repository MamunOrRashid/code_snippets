#include <stdio.h>
#include <math.h>
int main()
{
    double area,r,n;
    while(scanf("%lf%lf",&r,&n)!=EOF && n>2 && r>0){


            area=n*r*r*.5*sin((2*(acos(-1)))/n);
            printf("%.3lf\n",area);
    }
    return 0;
}
