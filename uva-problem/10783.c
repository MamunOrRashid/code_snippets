#include <stdio.h>

int main()
{
    int T,a,b,i,sum,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d",&a,&b);
        sum=0;
        for(j=a;j<=b;j++){
            if(j%2==1){
                sum=sum+j;
            }

        }
        printf("Case %d: %d\n",i,sum );
    }
    return 0;
}
