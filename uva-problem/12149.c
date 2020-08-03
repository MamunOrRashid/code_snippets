#include <stdio.h>
#include <math.h>
int main()
{
    int N,i,sum;
    while(scanf("%d",&N)!=EOF && N!=0){
        sum=0;
        for(i=1;i<=N;i++){
            sum=sum+pow(i,2);
        }
        printf("%d\n",sum);
    }
    return 0;
}
