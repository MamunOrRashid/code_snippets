#include <bits/stdc++.h>
using namespace std;
long long int sum,a=0,b=1;
long int c[306],n;

void show()
{
    c[1]=1;
    for(int i=2; i<=5000; i++)
    {
        //a[i]=a[i-1]+a[i-2];
        sum=a+b;
        c[i]=sum;
        a=b;
        b=sum;
    }
}
int main()
{
    show();
    while(1)
    {
        scanf("%ld",&n);
       // printf("%lld")
        printf("The Fibonacci number for %ld is %ld\n",n,c[n]);
    }
    return 0;
}
