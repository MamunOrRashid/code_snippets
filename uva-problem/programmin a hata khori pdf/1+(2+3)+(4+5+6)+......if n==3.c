#include <stdio.h>

int main()
{
    int n,i,j,sum;
    while(scanf("%d",&n)==1){
        sum=1;
        for(i=2;i<=n+1;i++){
            for(j=i;j<=i+1;j++){
                sum+=j;
            }
        }
        printf("The sum is %d\n",sum);
    }

    return 0;
}
