#include <bits/stdc++.h>
using namespace std;
long long int N,yes;
int main()
{
    int i;
    i=1;
    while(scanf("%lld",&N))
    {

        if(N==0) return 0;
        yes=ceil((3.0+sqrt(9.0+(8.0*N)))/2.0);

        printf("Case %d: %lld\n",i,yes);
         i++;
    }

    return 0;
}
