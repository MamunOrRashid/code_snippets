#include <stdio.h>

int main()
{
    int T,i,x0,y0,x1,y1,cx,cy,r,len,wd;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d%d%d%d%d",&x0,&y0,&x1,&y1,&cx,&cy,&r);
        len=(x1-x0);
        wd=(y1-y0);

        if(len==(5*r) && (3*len)==(5*wd) && (cx-x0)*20==(len*9) && ((cy-y0)*2)==wd)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}
