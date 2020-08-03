#include <stdio.h>

int main()
{
    long long int N,sum;
    while(scanf("%lld",&N)!=EOF && N>=0){
        sum=(N*(N+1))/2;
        printf("%lld\n",(sum+1));
    }
    return 0;
}
