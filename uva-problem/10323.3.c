#include <stdio.h>

int main()
{
    long int n,i,sum;
    while(scanf("%ld",&n)!=EOF && n<=999999){

       if((n>=0 && n<=8) || (n<=0 && n>=-8) || n==-9 || n==-11 || n==-13)printf("Underflow!\n");
        else if(n>13)printf("Overflow!\n");
        else if(n==-10 || n==-12){
            sum=1;
            for(i=-1;i>=n;i--){
                sum=sum*i;
            }
             printf("%ld\n",sum);
        }
        else if((n>=9 && n<=13)){
            sum=1;
            for(i=1;i<=n;i++){
               sum=sum*i;
            }
            printf("%ld\n",sum);
        }
    }
    return 0;
}
