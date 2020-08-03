#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int gcd(int a, int b)
{
    return b==0? a : gcd(b,a%b);
}
int solve()
{
    int k=c/a;
    for(int i=k; i<=c; i=i+k)
    {
        if( (i / gcd (i, a)) == k) return i;
    }
    return 0;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&a,&c);
        if(c%a)printf("NO SOLUTION\n");
        else printf("%d\n",solve());
    }

    return 0;
}
