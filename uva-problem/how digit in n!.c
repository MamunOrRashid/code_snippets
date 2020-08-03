#include <stdio.h>
#include <math.h>

int main()
{
    double n,sum,i;
    scanf("%lf",&n);
    sum=0;
    for(i=3;i<=n;i++){
        sum=(log (i)+sum);
    }
    printf("%lf\n",sum);
    return 0;
}
