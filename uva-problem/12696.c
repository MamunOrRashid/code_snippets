#include <stdio.h>

int main()
{
    int i,t,count=0;
    double l,wi,d,we;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%lf%lf%lf%lf",&l,&wi,&d,&we);
        if(((l+wi+d)<=125 || (l<=56 && wi<=45 && d<=25)) && we<=7){
            printf("1\n");count++;
        }
        else printf("0\n");
    }
    printf("%d\n",count);
    return 0;
}
