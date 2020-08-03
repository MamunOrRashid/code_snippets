#include <bits/stdc++.h>
using namespace std;
int a[306]={0,1},c[306],f1=1,f2=1,f3,turn;

void show()
{
    int i;
    for(i=2;;i++){
        if(f1==1 && f2==1 && i!=2) break;
        a[i]=f2;
        //printf("a[%d] = %d\n",i,a[i]);
        f3=f1+f2;
        f1=f2;
        f2=f3%100;
    }
    turn=i-2;
    for(i=1;i<=turn;i++){
        c[i]=c[i-1]+a[i];
    }
}
long long get(long long int n)
{
    return n/turn*c[turn] + c[n%turn];
}
int main()
{
    show();
    int cas;
    long long int L,R;
    scanf("%d",&cas);
    while(cas--){
        scanf("%lld%lld",&L,&R);
        printf("%lld\n",get(R)-get(L-1));
    }

    return 0;
}
