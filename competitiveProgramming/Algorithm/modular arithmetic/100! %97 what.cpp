#include <bits/stdc++.h>
using namespace std;

long long int N,P,M;
long long F(long long int N,long long int P)
{
    if(P==0) return 1;
    if(P%2==0)
    {
        long long int ret=F(N,P/2);
        return ((ret%M)*(ret%M))%M;
    }
    else return ((N%M)*(F(N,P-1)%M))%M;

}
int main()
{
    int tc;
    while(scanf("%d",&tc) && tc){
        while(tc--){
            scanf("%lld%lld%lld",&N,&P,&M);
            printf("%lld\n",F(N,P));
        }
    }
    return 0;
}


/**int fact=1;
for(int i=1;i<=7;i++)
{
	fact=((fact%97)*(i%97))%97;

}
printf("%d\n",fact);*/
