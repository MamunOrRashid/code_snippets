#include <stdio.h>
#include <math.h>

int main()
{
    double x1,y1,x2,y2,x3,y3,g,f,c,h,k,r;
    char ch,ch2,ch3,ch4,ch5;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
        g=((x1*x1+y1*y1-x3*x3-y3*y3)*(y1-y2)-(x1*x1+y1*y1-x2*x2-y2*y2)*(y1-y3))/(2*(y1-y3)*(x1-x2)+2*(y1-y2)*(x3-x1));
        f=((x1*x1+y1*y1-x2*x2-y2*y2)*(x1-x3)-(x1*x1+y1*y1-x3*x3-y3*y3)*(x1-x2))/(2*(y1-y3)*(x1-x2)+2*(y1-y2)*(x3-x1));
        c=-(x1*x1+y1*y1+2*g*x1+2*f*y1);
        h=-g;
        k=-f;
        r=sqrt(g*g+f*f-c);
        if(h<0){
            ch='+';
            h=h*-1;
        }
        else ch='-';
        if(k<0){
            ch2='+';
            k=k*-1;
        }
        else ch2='-';

        if(g<0){
            ch3='-';
            g=g*-1;
        }
        else ch3='+';
        if(f<0){
            ch4='-';
            f=(-1*f);
        }
        else ch4='+';
        if(c<0){
            ch5='-';
            c=(-1*c);
        }
        else ch5='+';

        printf("(x %c %.3lf)^2 + (y %c %.3lf)^2 = %.3lf^2\n",ch,h,ch2,k,r);
        printf("x^2 + y^2 %c %.3lfx %c %.3lfy %c %.3lf = 0\n\n",ch3,(2*g),ch4,(2*f),ch5,c);

    }
    return 0;
}
