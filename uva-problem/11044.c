#include <stdio.h>

int main()
{
    int t,n,m,i,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d\n%d",&n,&m);
        sum=(n/3)*(m/3);
        printf("%d\n",sum);
    }
    return 0;
}
