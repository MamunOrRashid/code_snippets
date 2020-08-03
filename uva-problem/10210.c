#include <stdio.h>
#include <math.h>

int main()
{
    double x1,x2,y1,y2,c,e,ab,am,mn,pi,c1,e1;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&c,&e)!=EOF){
        ab=sqrt((pow((x1-x2),2) + pow((y1-y2),2)));
        pi=acos(-1);

        c1=pi/180;

        am=ab/tan(c*c1);

         e1=pi/180;
        mn=ab/tan(e*e1);
         printf("%.3lf\n",(am+mn));
    }
    return 0;
}
