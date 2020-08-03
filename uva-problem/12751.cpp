#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T,i,n,k,x,j,sum,p;

    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d%d",&n,&k,&x);
        sum=0;
        for(j=1;j<=n;j++){
            sum=sum+j;
        }
        p=0;
        for(j=0;j<k;j++){
            p=x+j+p;
        }
       printf("Case %d: %d\n",i,sum-p);
    }
    return 0;
}
