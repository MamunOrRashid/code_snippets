#include <bits/stdc++.h>
using namespace std;
int tc,value[110];
char ch[10100],k1[110];

int main()
{
    scanf("%d",&tc);
    while(tc--)
    {
        int p,i,j,small_m,len,sum,t;
        scanf("%d",&p);
        for(i=0;i<p;i++) cin>>k1[i]>>value[i];

        scanf("%d",&small_m);
        getchar();
        sum=0;
        while(small_m--)
        {
            gets(ch);
            len=strlen(ch);
            for(j=0;j<len;j++)
            {
                for(t=0;t<p;t++)
                {
                    if(ch[j]==k1[t]){
                        sum=sum+value[t];
                        break;
                    }
                }
            }
        }

        printf("%.2lf$\n",(double)sum/100.0);

    }
    return 0;
}
