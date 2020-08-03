/**#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
typedef long long ll;

int m;
ll c[N];

void init (ll k)
{
    m = 0;

    ll t = sqrt(k);
    for (ll i = 1; i <= t; i++)
    {
        if (k % i == 0)
        {
            c[m++] = i;
            if (k / i != i)
                c[m++] = k / i;
        }
    }
    sort (c, c + m);
   /// for(int i=0;i<m;i++) printf("%d\n",c[i]);
}

ll gcd (ll a, ll b)
{
    return b == 0 ? a : gcd(b, a%b);
}

int solve (ll n)
{
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m; j++)
        {
            printf("c[%d]=%d c[%d]=%d\n",i,c[i],j,c[j]);
            if (c[i] * c[j] / gcd(c[i], c[j]) == n){
                ans++;

                printf("ans = %d\n",ans);
            }
        }
    }
    return ans;
}

int main ()
{
    ll n;
    while (scanf("%lld", &n), n)
    {
        init (n);

        printf("%lld %d\n", n, solve(n));
    }
    return 0;
}*/










#include <bits/stdc++.h>
using namespace std;
long long int  arr[3000],t;
typedef long long ll;

void div(ll n)
{
    t=0;
    int boundary = sqrt(n);
    for(ll i=1; i<=boundary; i++)
    {
        if(n%i==0)
        {
            arr[t++]=i;
            if(i!=(n/i))
            {
                arr[t++]=(n/i);
            }
        }
    }
    sort(arr,arr+t);
  //  for(int i=0; i<t; i++) printf("%d\n",arr[i]);
}
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
ll finalValue(ll n)
{
    ll result = 0 ;
    for(ll i=0; i<t; i++)
    {
        for(ll j=0; j<t; j++)
        {
            if(((arr[i]*arr[j])/gcd(arr[i],arr[j])) == n)
                result++;
        }
    }
    return result;
}
int main()
{
    ll  n;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        div(n);
        printf("%lld %d\n",n,finalValue(n));

    }

    return 0;
}











