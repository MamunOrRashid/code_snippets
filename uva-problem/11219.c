#include <stdio.h>
int main()
{
    int T,d1,d2,m1,m2,y1,y2,i,diff;

    scanf("%d",&T);

    for(i=1;i<=T;i++){
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        diff=y1-y2;
        if(y2>y1){
            printf("Case #%d: Invalid birth date\n",i);
            continue;
        }
        if(y2==y1){
            if(m2>m1 || (m1==m2 && d2>d1)){
                printf("Case #%d: Invalid birth date\n",i);
                continue;
            }
        }
        if(diff>130)printf("Case #%d: Check birth date\n",i);
        else if((m2>m1)||(m2==m1 && d2>d1)){
            diff--;
            printf("Case #%d: %d\n",i,diff);
        }
        else printf("Case #%d: %d\n",i,(y1-y2));
    }

    return 0;
}


