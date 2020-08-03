#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    float m1,m2,m3,m4,x,y;
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)==6){
            if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)break;
            else if(((a*e)-(d*b))==0)printf("No fixed point exists.\n");
        else{

            m1=(float)a/(float)b;
            m2=(float)c/(float)b;
            m3=(float)d/(float)e;
            m4=(float)f/(float)e;

            x=(m4-m2)/(m3-m1);
            y=((-m1)*x)+m2;
            printf("The fixed point is at %.2f %.2f.\n",x,y);
        }

    }
    return 0;
}
