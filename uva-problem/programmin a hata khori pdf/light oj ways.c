#include <stdio.h>

int main()
{
    int x,i,N,j,a[10000],k,m,sum,count;
    scanf("%d",&x);
    N=(x+10)/2;
    j=0;
    for(i=1;i<=N;i++){
        a[j]=i;
        j++;
    }
    count=0;
    for(k=0;k<N-1;k++){
        sum=0;
        for(m=k;m<N;m++){
            sum=sum+a[m];
            if(sum==N)count++;
        }
    }
    printf("%d\n",count);
    main();
    return 0;
}
