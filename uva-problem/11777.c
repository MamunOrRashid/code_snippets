#include <stdio.h>

int main()
{
    int T,i,a,b,c,d,e,f,g,sum,p;

    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d%d%d%d%d%d",&g,&f,&e,&d,&a,&b,&c);

        if(c>=b&&b>=a)p=(b+c)/2;
        else if(c>=b&&a>=b)p=(a+c)/2;
        else if(b>=a&&a>=c)p=(b+a)/2;
        else if(b>=c&&c>=a)p=(b+c)/2;
        else if(a>=c&&c>=b)p=(c+a)/2;
        else if(a>=b&&b>=c)p=(b+a)/2;
         sum=g+f+e+d+p;
         if(sum>=90)printf("Case %d: A\n",i);
         else if(sum>=80 && sum<90)printf("Case %d: B\n",i);
         else if(sum>=70 && sum<80)printf("Case %d: C\n",i);
         else if(sum>=60 && sum<70)printf("Case %d: D\n",i);
         else if(sum<60)printf("Case %d: F\n",i);

    }
    return 0;
}
