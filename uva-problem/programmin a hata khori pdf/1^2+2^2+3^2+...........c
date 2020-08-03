#include <stdio.h>

int main()
{
    int n,i,sum;
    while(scanf("%d",&n)==1){
        sum=0;
        for(i=1;i<=n;i++){
            sum=sum+pow(i,2);
        }
    printf("%d\n",sum);
    }
    return 0;
}
