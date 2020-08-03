#include <stdio.h>

int main()
{
    int n,i,j,sum;
    while(scanf("%d",&n)==1){
        sum=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                sum+=j;
            }
        }
        printf("The sum is %d\n",sum);
    }

    return 0;
}
