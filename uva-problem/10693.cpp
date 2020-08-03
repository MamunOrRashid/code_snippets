#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,f;
    double v,n;

    while(scanf("%d%d",&l,&f)!=EOF)
    {
        if(!l && !f) break;
        v=sqrt((double)l*(double)f*2.0);
        n=(3600.0*v)/((double)l*2.0);
        printf("%.8lf %.8lf\n",v,n);
    }

    return 0;
}
