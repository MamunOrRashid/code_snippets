#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,sum,yes;
    int check;
    int n;
    scanf("%d",&n);
    check=0;
    while(check!=n){
        scanf("%lf%lf%lf",&a,&b,&c);
       if(a<=0 || b<=0 || c<=0){
                printf("These are invalid inputs!\n");
                 check++;
                 continue;
        }
        sum=((1/a)+(1/b)+(1/c))*(-(1/a)+(1/b)+(1/c))*((1/a)-(1/b)+(1/c))*((1/a)+(1/b)-(1/c));
        yes=1/(sqrt(sum));

        if(sum<0.000){
            printf("These are invalid inputs!\n");
            check++;
        }
        if(sum>0.00)printf("%.3lf\n",yes);

    }
    return 0;
}
