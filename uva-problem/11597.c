#include <stdio.h>

int main()
{
    int n,i,sum;
    i=1;
    while(scanf("%d",&n)==1 && n!=0){
        sum=n/2;
        printf("Case %d: %d\n",i,sum);
        i++;
    }
    return 0;
}
