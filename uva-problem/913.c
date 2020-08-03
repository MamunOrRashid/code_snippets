#include <stdio.h>

int main()
{
    long long int N,sum;
    while(scanf("%lld",&N)==1){
        sum=((((N*(N+2))/2)*3)-6);
        printf("%lld\n",sum);
    }
    return 0;
}
