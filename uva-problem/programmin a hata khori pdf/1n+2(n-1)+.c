#include <stdio.h>

int main()
{
    int n,i,p,sum;
    while(scanf("%d",&n)==1){
        sum=0;
        p=n;
        for(i=1;i<=p;i++){
            sum=sum+(i*n);
            n=n-1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
