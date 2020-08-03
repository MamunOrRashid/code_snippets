#include <stdio.h>

int main()
{
    int i,T,a,b,c;
    scanf("%d",&T);

    for(i=1;i<=T;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a<b&&b<c&&a<c)printf("case 1: %d\n",b);
        else if(a>b&&b>c&&a>c)printf("case 2: %d\n",b);
        else if(a>b&&b<c&&a<c)printf("case 3: %d\n",a);
    }
    return 0;

}
