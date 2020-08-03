#include <stdio.h>

int main()
{
    int T,i,N,j,max,a[10000];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        for(j=0;j<N;j++){
            scanf("%d",&a[j]);
        }
        max=a[0];
        for(j=0;j<N;j++){
            if(a[j]>max){
                max=a[j];
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}

