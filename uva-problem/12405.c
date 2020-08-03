#include <stdio.h>

int main()
{
    int T,N,sum,i,j,count;
    char a[10000];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        count=0;
        for(j=0;j<N;j++){
            scanf("%c",&a[j]);
        }
        for(j=0;j<N;j++){
             if(a[j]=='.')count++;
        }
        sum=count/3;
        if((3*sum)<count) printf("Case %d: %d\n",i,(sum+1));
       // else printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
