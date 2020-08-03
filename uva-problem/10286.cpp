#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)


int main()
{
    double n,output;
    while(scanf("%lf",&n)!=EOF){
        output=n*sin(108*pi/180)/sin(63*pi/180);
        printf("%.10lf\n",output);
    }

    return 0;
}
