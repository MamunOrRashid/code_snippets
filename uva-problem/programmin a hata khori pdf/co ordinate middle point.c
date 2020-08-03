#include <stdio.h>


int main()
{
    int a,b,sum,c,d,sum1;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4){
        sum=(a+c)/2;
        sum1=(b+d)/2;
        printf("%d %d",sum,sum1);
    }

    return 0;
}
