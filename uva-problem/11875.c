#include <stdio.h>

int main()
{
    int T,x,j,a[22],count,p,N;
    scanf("%d",&T);
    for(x=1;x<=T;x++){
        scanf("%d",&N);
        count=0;
        for(j=0;j<N;j++){
            scanf("%d",&a[j]);
            count++;
        }
        p=count/2;
        printf("Case %d: %d\n",x,a[p]);
    }
    return 0;
}
