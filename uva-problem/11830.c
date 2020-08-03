#include <stdio.h>

int main()
{
    char D[50],ch[100000],p[100000],rev[100000],x[100000],q[100000];
    while(scanf("%s%s",&D,&ch)!=EOF && D!=0 && ch!=0)
    {
        rev=0;
        while(ch!=0)
        {
            p=ch%10;
            ch=ch/10;
            if(p==D)continue;
            else rev=rev*10+p;
        }
        x=0;
        while(rev!=0)
        {
            q=rev%10;
            rev=rev/10;
            x=x*10+q;
        }
        printf("%s\n",x);
    }
    return 0;

}
