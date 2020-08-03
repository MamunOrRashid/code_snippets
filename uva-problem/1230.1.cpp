#include <bits/stdc++.h>
using namespace std;

long long int N,P,M,i=0;
long long F(long long int N,long long int P)
{
    if(P==0) return 1;
    if(P%2==0)
    {
        printf("first yes i=%d %d %d\n",i,N,P);
        long long int ret=F(N,P/2);
        printf("yes=%d value i= %d\n",i,((ret%M)*(ret%M))%M);
        i++;
        return ((ret%M)*(ret%M))%M;
    }
    else{
        printf("last i=%d value = %d\n",i,((N%M)*(F(N,P-1)%M))%M);
        return ((N%M)*(F(N,P-1)%M))%M;
    }

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

