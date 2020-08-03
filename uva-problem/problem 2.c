#include <stdio.h>

int main()
{
    int i,v,t,displace;

    for(i=1;i<=2;i++){
        scanf("%d%d",&v,&t);

        displace=2*v*t;
        printf("%d\n",displace);
    }

    return 0;

}
