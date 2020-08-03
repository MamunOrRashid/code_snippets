#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()
{
    double s,a,arc,chord;
    char ch[10];
    while(scanf("%lf%lf%s",&s,&a,ch)==3)
    {
        s=s+6440.0;
        if(a>180.0) a=360.0-a;
        if(!strcmp(ch,"min")) a=a/60.0;
        arc=(2.0*pi*s*a)/360.0;
       // chord=sqrt(2*s*s-2*s*s*cos((pi*a)/180.0));
       chord=2*s*sin((pi*(a/2.0))/180.0);
        printf("%.6lf %.6lf\n",arc,chord);
    }

    return 0;
}
