#include <bits/stdc++.h>
using namespace std;
long long int a[10010];
#define ll long long int
int main() {
    ll n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &n);
        for(int i=6;i<=n;i++){
            a[i]=(a[i-1]%10000007 + a[i-2]%10000007 +a[i-3]%10000007 +a[i-4]%10000007 +a[i-5]%10000007+a[i-6]%10000007)%10000007;
        }
        printf("Case %lld: %lld\n", ++caseno, a[n]%10000007);
    }
    return 0;
}

