#include <stdio.h>

int main()
{
    int T,x;
    long int a,b,c;
    scanf("%d",&T);
    for(x=1;x<=T;x++){
        scanf("%ld%ld%ld",&a,&b,&c);
        if((a+b)<=c || (b+c)<=a ||(c+a)<=b)printf("Case %d: Invalid\n",x);
        else if(a==b && b==c && c==a)printf("Case %d: Equilateral\n",x);
        else if(a==b || b==c ||c==a)printf("Case %d: Isosceles\n",x);
        else if(a!=b && b!=c && c!=a)printf("Case %d: Scalene\n",x);
    }
    return 0;

}
