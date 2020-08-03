#include <bits/stdc++.h>
using namespace std;

int n;
double c[1010];

int main()
{
    while(scanf("%d", &n)!=EOF)
    {

        if(n == 0) break;
        double avg = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%lf", &c[i]);
            avg += c[i];
        }
        avg = avg / n;
        //printf("avg = %lf\n",avg);
        double pos = 0, neg = 0;
        for(int i = 0; i < n; i++)
        {
            double v = (long) ((c[i] - avg) * 100.0) / 100.0;
           // printf("v = %lf\n",v);
            if(v > 0) pos += v;
            else neg += v;
        }
        neg = -neg;
        printf("$%.2lf\n", neg > pos? neg : pos);
    }

    return 0;

}

