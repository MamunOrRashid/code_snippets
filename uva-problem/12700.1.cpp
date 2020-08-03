#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int x,t,a,b,w,n,i,j;
    char ch[20];
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        scanf("%d",&n);
        scanf("%s",ch);
        t=a=b=w=0;
        for(j=0;j<n;j++){
            if(ch[j]=='T') t++;
            else if(ch[j]=='A') a++;
            else if(ch[j]=='B') b++;
            else if(ch[j]=='W') w++;


        }
        if(n==a)printf("Case %d: ABANDONED\n",i);
         else if(w==0 && t==0)printf("Case %d: BANGLAWASH\n",i);
        else if(b==0 && t==0)printf("Case %d: WHITEWASH\n",i);
        else if(b>w)printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(w>b)printf("Case %d: WWW %d - %d\n",i,w,b);
        else if(b==w)printf("Case %d: DRAW %d %d\n",i,b,t);


    }


    return 0;
}
