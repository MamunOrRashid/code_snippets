#include <stdio.h>

int main()
{
    int T,N,i,j,k,m,p[80];
    scanf("%d",&T);

    for(i=1;i<=T;i++){
        k=0;
        m=0;
        scanf("%d",&N);

        for(j=0;j<N;j++){
            scanf("%d",&p[j]);
        }

        for(j=1;j<N;j++){
            if(p[j-1]>p[j]){
                k=k+1;
            }
            if(p[j-1]<p[j]){
                m=m+1;
            }
        }
        printf("Case %d: %d %d\n",i,m,k);
    }
    return 0;
}
