#include <stdio.h>

int main()
{
    int n,i,sum;
    while(scanf("%d",&n)==1){
        sum=0;
        for(i=1;i<=n;i++){
            if(i%2==0)sum=sum-i;
            else sum=sum+i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
