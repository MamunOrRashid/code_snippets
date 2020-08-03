#include <stdio.h>

int main()
{
    int i,j,C,N,a[1000],avg,sum,count;
    float p;
    scanf("%d",&C);
    for(i=1;i<=C;i++){
        scanf("%d",&N);

        sum=0;
        for(j=0;j<N;j++){
            scanf("%d",&a[j]);
        }

        for(j=0;j<N;j++){
            sum=sum+a[j];
        }
        avg=(sum/N);
        p=(float)100/(float)N;
        count=0;
        for(j=0;j<N;j++){
            if(a[j]>avg)count++;
        }

        printf("%.3f%%\n",(count*p));
    }

    return 0;
}
