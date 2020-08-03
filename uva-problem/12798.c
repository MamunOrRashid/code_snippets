#include <stdio.h>

int main()
{
    int N,M,i,j,a[104],count,sum,m;
    while(scanf("%d%d",&N,&M)!=EOF){
        sum=0;
        for(i=0;i<N;i++){
        count=0;
            for(j=0;j<M;j++){
                scanf("%d",&a[j]);
                if(a[j]!=0){
                    count++;
                }
            }

            if(count==M)sum++;
        }
    printf("%d\n",sum);
    }
    return 0;
}
