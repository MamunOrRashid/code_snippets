#include <bits/stdc++.h>
using namespace std;

int N;
void solve()
{
    int i, j, k, cnt = 0, temp;
    long long int res = 0;
    k = (int)sqrt(N + 1);
    for(i = 2; i <= k; i ++)
        if(N % i == 0)
        {
            temp = 1;
            while(N % i == 0)
            {
                temp *= i;
                N /= i;
            }
            res += temp;
            cnt ++;
        }
    if(N != 1 || cnt == 0)
    {
        res += N;
        cnt ++;
    }
    if(cnt == 1)
        res ++;
    printf("%lld\n", res);
}
int main()
{
    int t = 0;
    for(;;)
    {
        scanf("%d", &N);
        if(!N)
            break;
        printf("Case %d: ", ++ t);
        solve();
    }
    return 0;
}
