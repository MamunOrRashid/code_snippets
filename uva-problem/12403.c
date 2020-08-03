#include <stdio.h>

int main()
{
    int T,s[10000],m,sum=0,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%s",s);

        if(strcmp(s,"donate")==0){
            scanf("%d",&m);
            sum=sum+m;
        }
            if(i%2==0){
                if(strcmp(s,"report")==0){
                    printf("%d",sum);
                }
            }

    }
    return 0;
}
