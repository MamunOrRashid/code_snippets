#include <bits/stdc++.h>
void convert(long long int n);
int main()
{
    long long int n,count=0;
    while(scanf("%lld",&n)!=EOF){
        count++;
        printf("%4lld.",count);
        if(n==0)printf(" 0");
        else{
        convert(n);
        }
          printf("\n");
    }
    return 0;
}

void convert(long long int n){
    if(n>=10000000){
        convert(n/10000000);
        printf(" kuti");
        n=n%10000000;
    }
    if(n>=100000){
        convert(n/100000);
        printf(" lakh");
        n=n%100000;
    }
    if(n>=1000){
        convert(n/1000);
        printf(" hajar");
        n=n%1000;
    }
    if(n>=100){
        convert(n/100);
        printf(" shata");
        n=n%100;
    }
   if(n)printf(" %lld",n);
}
