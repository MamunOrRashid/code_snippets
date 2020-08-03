#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c,capacity[30],flag[30],i,t=1;
    while(scanf("%d%d%d",&n,&m,&c)!=EOF)
    {
        int k=n;
        if(n==0 && m==0 && c==0) break;

        for(i=1; i<=n; i++) flag[i]=0;
        for(i=1; i<=n; i++) scanf("%d",&capacity[i]);

        int cap=0,max=0,check=0;

        for(i=1; i<=m; i++)
        {
            scanf("%d",&n);
            if(flag[n]==0)
            {
                cap+=capacity[n];
                flag[n]=1;
                if(cap>c)
                {
                    check=1;
                }
                if(cap>max) max=cap;
            }
            else
            {
                if(n>k)capacity[n]=0;
                cap -= capacity[n];
                flag[n]=0;
            }

        }

        if(check==1)
        {
            printf("Sequence %d\n",t);
            printf("Fuse was blown.\n\n");
        }
        else
        {
            printf("Sequence %d\n",t);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",max);
        }
        t++;
    }

}
