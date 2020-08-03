#include <iostream>
#include <cstdio>
using namespace std;

bool a[33060];
int i,j;
void show()
{
    a[0]=1;
    a[1]=1;
    for(i=2;i<=33000;i++)
    {
        for(j=2;i*j<=33000;j++)
        {
            a[i*j]=1;
        }
    }
}
int main()
{
    show();
    int n,count;
    while(scanf("%d",&n)==1 && n!=0)
    {
        count=0;
        for(int i=n;i>=n/2;i--)
        {
            if(!a[i] && !a[n-i]) count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
