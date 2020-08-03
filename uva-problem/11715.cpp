#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    double n,u,v,t,a,s,sum1,sum2;
    int i=1;
    while(1){
        cin>>n;
        if(n==0)break;
        else{
            if(n==1){
                scanf("%lf%lf%lf",&u,&v,&t);
                printf("Case %d: %.3lf %.3lf\n",i,((u+v)/2)*t,(v-u)/t);
            }
            else if(n==2){
                scanf("%lf%lf%lf",&u,&v,&a);
                printf("Case %d: %.3lf %.3lf\n",i,((u+v)/2)*t,(v-u)/a);
            }
            else if(n==3){
                scanf("%lf%lf%lf",&u,&a,&s);
                sum1=sqrt(u*u+2*a*s);
                printf("Case %d: %.3lf %.3lf\n",i,sum1,(sum1-u)/a);
            }
            else if(n==4){
                scanf("%lf%lf%lf",&v,&a,&s);
                sum2=sqrt(v*v-2*a*s);
                printf("Case %d: %.3lf %.3lf\n",i,sum2,(v-sum2)/a);
            }
        }
        i++;
    }
}
