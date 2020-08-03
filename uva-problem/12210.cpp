#include <bits/stdc++.h>
using namespace std;

int main()
{

    int b,s,t,ch1[10005],ch2[10005],j,i;
    t=0;
    while(scanf("%d%d",&b,&s)==2)
    {
        t++;
        for(int i=0; i<b; i++) scanf("%d",&ch1[i]);

        for(int i=0; i<s; i++) scanf("%d",&ch2[i]);

        if(b==0 && s==0)break;
        else if(b<s || b==s)printf("Case %d: 0\n",t);
        else if(b>s)
        {
            for(i=0; i<b-1; i++)
            {
                for(j=i+1; j<b; j++)
                {
                    if(ch1[i]>ch1[j])
                    {
                        int temp=ch1[i];
                        ch1[i]=ch1[j];
                        ch1[j]=temp;
                    }
                }
            }
            printf("Case %d: %d %d\n",t,b-s,ch1[0]);
        }
    }

    return 0;
}
