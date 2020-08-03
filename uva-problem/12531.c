#include <stdio.h>

int main()
{
    int A,i,flag;
    while(scanf("%d",&A)!=EOF){
            flag=0;
        for(i=0;i<=180;i+=6){
            if(A==i)flag=1;
        }
        if(flag==1)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
