#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,d,l;
    double h,k,pi;
    scanf("%d",&n);
    pi=acos(-1);
    while(n--){
        scanf("%d%d",&d,&l);
        h=l/2.00;
        k=sqrt(pow((l/2.00),2)-pow((d/2.00),2));
        printf("%.3lf\n",pi*h*k);
    }



    return 0;
}

