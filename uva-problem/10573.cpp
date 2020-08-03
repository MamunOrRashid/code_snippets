#include <bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
//#define PI 3.141592653589793
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int r1,r2;
        scanf("%d",&r1);
        if(getchar()=='\n')
        {
            double r = r1/4.0;

            double x = (r*2)*(r*2)*PI-(r*r)*PI-(r*r)*PI;
            if(x>0.0)
                printf("%.4f\n",x);
            else printf("Impossible\n");
        }
        else
        {
            scanf("%d",&r2);
            double x = (r1+r2)*(r1+r2)*PI-(r1*r1)*PI-(r2*r2)*PI;
            if(x>0.0)
                printf("%.4f\n",x);

            else printf("Impossible\n");
        }
    }
    return 0;
}
