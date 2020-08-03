#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int N,last,i,a[1430],found;
    while(scanf("%d",&N)!=EOF && N)
    {
        for(i=0; i<N; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+N);
        last=a[0];
        found=0;
        for(i=0; i<N; i++)
        {
            if(a[i]-last>200)
            {
                found=1;
                break;
            }
            last=a[i];
        }
        if(a[i-1]<1322)found=1;
        if(found) printf("IMPOSSIBLE\n");
        else printf("POSSIBLE\n");
    }
    return 0;
}
