#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int X,Y;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%llu",&Y);
        X=sqrt(Y);
        printf("%llu\n\n",X);
    }
    return 0;

}
