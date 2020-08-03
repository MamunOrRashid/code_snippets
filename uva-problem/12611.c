#include <stdio.h>

int main()
{
    int T,R,x,p,sum,x1,i,x2,p1;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&R);
        x=(5*R);
        p=(3*x)/5;
        p1=(p/2);
        sum=(x/20);
        x1=(9*sum);
        x2=(11*sum);
        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",i,(-x1),p1,x2,p1,x2,(-p1),(-x1),(-p1));
    }
    return 0;
}
