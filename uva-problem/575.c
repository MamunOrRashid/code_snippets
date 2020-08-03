#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int n,sum,i,p;
    while(scanf("%llu",&n)!=EOF && n!=0){

            sum=0;
            i=1;
            while(n!=0){
                p=n%10;
                if(p==1){
                sum=sum+p*(pow(2,i)-1);
                }
                else if(p==2){
                sum=sum+p*(pow(2,i)-1);
                }
                n=n/10;
                i++;
            }

         printf("%llu\n",sum);
    }
    return 0;
}
