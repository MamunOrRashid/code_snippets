#include <stdio.h>

int main()
{
    long int n,sum;
    while(scanf("%ld",&n)!=EOF && n!=0){
        if(n>0){
            sum=0;
          while(n!=0){
            sum=sum+n%10;
            n=n/10;

              if(n==0){
                 if(sum>9){
                        n=sum;
                        sum=0;
                 }
              }
          }
          printf("%ld\n",sum);

        }
    }
    return 0;
}
