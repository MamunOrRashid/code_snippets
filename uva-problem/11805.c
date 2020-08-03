#include <stdio.h>

int main()
{
    int T,N,K,i,P;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d%d",&N,&K,&P);
         printf("Case %d: %d\n",i,(((K-1+P)%N)+1));
    }
    return 0;
}
