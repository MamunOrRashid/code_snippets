#include <stdio.h>

int main()
{
    int n,s,d,p,q,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&s,&d);
        if(s<0 || d<0)break;

        else if(s>=d && (s+d)%2==0){
        p=(s+d)/2;
        q=(s-d)/2;

        printf("%d %d\n",p,q);
        }

        else printf("impossible\n");
    }
    return 0;
}
