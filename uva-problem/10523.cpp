#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n,a,i,j;
     unsigned long long int sum,yes;
     scanf("%d%d",&n,&a);
     sum=0;
     for(i=1;i<=n;i++){
        ///sum = sum + (i*pow(a,i));
        yes=1;
        for(j=1;j<=i;j++){
            yes=yes*a;
        }
        sum=sum+ (i*yes);
     }
     printf("%lld\n",sum);
    main();
    return 0;
}
