#include <stdio.h>

int main()
{
    int i,T;
    double r,area,Area,x,L;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%lf",&L);
        r=L/5;
        area=(3.141592653589793*r*r);
        x=((3*L)/5);
        Area=(L*x);
        printf("%.2lf %.2lf\n",area,(Area-area));
    }
    return 0;
}
