#include <bits/stdc++.h>
using namespace std;
#define EPS 1e-7
int p,q,r,s,t,u;

double f(double x)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
double secant()
{
    if (f(0)==0) return 0;
    double x1=0,x2=1,d,x3;
    while(1){
        d=(f(x2)*(x2-x1))/(f(x2)-f(x1));
        if(fabs(d)<EPS) return x2;
        x3=x2-d;
        x1=x2;
        x2=x3;
    }
}
int main()
{
    while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)!=EOF)
    {
        if(f(0)*f(1)>0)printf("No solution\n");
        else
        {
            printf("%.4lf\n",secant());
        }
    }


    return 0;
}
