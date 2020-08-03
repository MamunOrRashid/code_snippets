#include <stdio.h>

int main()
{
    int s,a[15],b[15],i,j,flag,m;
    scanf("%d",&s);
    for(i=1;i<=s;i++){
            if(s<0)break;
        for(j=0;j<12;j++){
            scanf("%d",&a[i]);

        }
        if(flag==1)break;
         for(j=0;j<12;j++){
            scanf("%d",&b[i]);

        }
        if(m==2)break;

        printf("Case %d:\n",i);
        if(b[0]<a[0])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[1]<a[0]+a[1])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[2]<a[0]+a[1]+a[2])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[3]<a[1]+a[2]+a[3])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[4]<a[2]+a[3]+a[4])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[5]<a[3]+a[4]+a[5])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[6]<a[4]+a[5]+a[6])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[7]<a[5]+a[6]+a[7])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[8]<a[6]+a[7]+a[8])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[9]<a[7]+a[8]+a[9])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[10]<a[8]+a[9]+a[10])printf("No problem! :D\n");
        else printf("No problem! :C\n");
        if(b[11]<a[9]+a[10]+a[11])printf("No problem! :D\n");
        else printf("No problem! :C\n");

    }
    return 0;
}
