#include <stdio.h>

int main()
{
    long long int N,p[9000],count,i,j;
    for(j=1;j<=100;j++){
            scanf("%lld",&N);
            if(N<0)break;
            if(N==0)printf("%lld",N);
            count=0;

            for(i=0;N!=0;i++){

                p[i]=N%3;
                count=count+1;
                N=N/3;
            }
            for(i=count-1;i>=0;i--){
                printf("%lld",p[i]);
            }
            printf("\n");

    }
    return 0;
}
