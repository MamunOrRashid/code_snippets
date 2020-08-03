#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,n,tc;
    double sum,one;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        scanf("%d%d%d",&x,&y,&n);
        one=(double)y*log10((double)x);
        printf("%lf\n",one);

        sum=pow(10,one);
        printf("%lf",sum);
//        printf("%d\n",);
    }
    return 0;
}
