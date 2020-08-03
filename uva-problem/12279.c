#include <stdio.h>

int main()
{
    int N,i,j=1,count,a,sum;
    while(scanf("%d",&N)!=EOF && N!=0){
        count=0;

        for(i=1;i<=N;i++){
            scanf("%d",&a);
            if(a==0)count++;
        }
        sum=N-count;
        printf("Case %d: %d\n",j,sum-count);
        j++;
    }
    return 0;
}
