#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,i,a,sum1,sum2,p;
    scanf("%d",&n);
    while(n--){
        sum1=sum2=p=0;
        for(i=0;i<4;i++){
            scanf("%d",&a);
            while(a!=0){
                  sum1=sum1+ (a%10);
                a=a/10;
                sum2=(a%10)*2;
                while(sum2!=0){
                    p=p+sum2%10;
                    sum2=sum2/10;
                }
                a=a/10;
            }
        }
       if(p==sum1)printf("Valid\n");
       else printf("Invalid\n");
    }

    return 0;
}
