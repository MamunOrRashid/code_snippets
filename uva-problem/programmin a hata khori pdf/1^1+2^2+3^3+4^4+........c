#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,j,sum;
    while(scanf("%d",&n)==1){
        sum=0;
        for(i=1,j=1;i<=n && j<=n;i++,j++){
            sum=sum+pow(i,j);
        }
    printf("%d\n",sum);
    }
    return 0;
}

