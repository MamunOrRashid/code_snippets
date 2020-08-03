#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,m,sum,fact,t,s;
    while(scanf("%lf%lf",&n,&m) && n && m){
        t=n;
        s=m;
        if((n-m)>m)m=n-m;
        fact=1;
        while(m){
            fact*=n/m;
            n--;
            m--;
        }
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",t,s,fact);
    }

    return 0;
}
