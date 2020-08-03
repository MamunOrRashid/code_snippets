#include <bits/stdc++.h>
using namespace std;
long long int b,p,m;

long long bigmod(long long int b,long long int p,long long int m)
{
    if(p==0)return 1;
    else if(p%2==1)
    {
        long long fixed=b%m;
        long long change=bigmod(b,p-1,m);
        return (fixed*change)%m;
    }
    else if(p%2==0)
    {
        long long half=bigmod(b,p/2,m);
        return (half*half)%m;
    }
}

int main()
{
    while(scanf("%lld%lld%lld",&b,&p,&m)!=EOF)
    {
        printf("%lld\n",bigmod(b,p,m));
    }

    return 0;
}
