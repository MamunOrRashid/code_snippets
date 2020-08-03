#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,p,j,t,a,sum1,sum2;
    double mile,juice;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        sum1=sum2=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            p=a;
            mile=(double)a/29.00;
            if(mile>2.00) a=a+1-(int)mile;
            mile=(double)a/29.00;

            juice=(double)p/59.00;
            if(juice>2.00) p=p+1-(int)juice;
             juice=(double)p/59.00;

            sum1=sum1+ceil(mile)*10;
            sum2=sum2+ceil(juice)*15;
        }
        if(sum1<sum2) printf("Case %d: Mile %d\n",i,sum1);
        else if(sum2<sum1) printf("Case %d: Juice %d\n",i,sum2);
        else printf("Case %d: Mile Juice %d\n",i,sum1);
    }
    return 0;
}
