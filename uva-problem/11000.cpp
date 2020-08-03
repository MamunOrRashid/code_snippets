#include <bits/stdc++.h>
#define max1 5000000
#define max2 5000000
using namespace std;
unsigned long int p[max1],k[max2];
int n;
void show()
{
    int i;
    p[0]=1;k[0]=2;
    for(i=1;i<=70000;i++)
    {
        k[i]=p[i-1]+k[i-1]+1;
        p[i]=k[i-1];
    }

}
int main()
{
    show();
    while(scanf("%d",&n)==1 && n>=0)
    {
        if(n==0)printf("0 1\n");
        else if(n==1) printf("1 2\n");
        else printf("%lu %lu\n",p[n-1],k[n-1]);
    }

    return 0;
}
