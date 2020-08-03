#include <stdio.h>

int main()
{
    double h,m,big,small,value;
    while(scanf("%lf:%lf",&h,&m)!=EOF)
    {
        if(h==0 && m==0)break;
        big=(h+(m/60))*30;
        small=m*6;
        value=(big-small);
        if(value<0)value*=-1;
        if(value>180)
            value=360-value;
        printf("%.3lf\n",value);

    }

    return 0;
}
