#include <stdio.h>

int main()
{
    long long int N,sum;
    while(scanf("%lld",&N)!=EOF){
        if(N<0)break;
        else if(N==1)printf("0%%\n");
        else{
            sum=N*25;
            printf("%lld%%\n",sum);
        }
    }

    return 0;
}
