#include <stdio.h>

int main()
{
    unsigned long long int n,fact,i;
    while(scanf("%llu",&n)==1){
        fact=1;
        for(i=1;i<=n;i++){

            fact=fact*i;

        }
        if(fact>6227020800)printf("Overflow!\n");
        else if(fact<10000)printf("Underflow!\n");
        else printf("%llu\n",fact);
    }
    return 0;
}
