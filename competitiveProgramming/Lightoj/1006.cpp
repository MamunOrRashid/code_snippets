#include <bits/stdc++.h>
using namespace std;


int main()
{

    long long int a, b, c, d, e, f,dp[100000],n,caseno=0,cases;
    scanf("%lld", &cases);

    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        dp[0]=a;
        dp[1]=b;
        dp[2]=c;
        dp[3]=d;
        dp[4]=e;
        dp[5]=f;
        int i;

        for(i=6; i<=n; i++)
        {
            dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%10000007;
        }
        printf("Case %d: %d\n", ++caseno, dp[i-1]);
    }
    return 0;
}
