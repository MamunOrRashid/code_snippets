#include <bits/stdc++.h>
using namespace std;
int N=10000000;
bool status[1100002];
int temp[1100002],pt=0;
void sieve()
{

    int sq=sqrt(N);

    for(int i=2; i<=sq; i+=1)
    {
        if(status[i]==0)
        {
            for(int j=i*i; j<=N; j+=i) status[j]=1;
        }
    }
    status[1]=1;
    for(int i=2;i<=N;i++){
        if(status[i]==false)temp[pt++]=i;
    }
}
int main()
{
    sieve();

   // for(int i=0;i<200;i++)printf("%d ",temp[i]);

    long long N;
    while (scanf("%lld", &N) == 1 && N != 1)
    {
        int ret = 0;
        for (int i = 0; (long long)temp[i] * temp[i] <= N; i++)
        {
            while (N%temp[i] == 0)
            {
                N /= temp[i], ret++;
            }
        }
        if (N != 1)	ret++;
        printf("%d\n", ret);
    }
    return 0;
}
