#include <stdio.h>
#include <string.h>

int main()
{
    char ch[8];
    int T,sum=0,i,n;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%s",ch);
        if(strcmp(ch,"donate")==0){
            scanf("%d",&n);
            if(n>=100 && n<=100000){
                sum=sum+n;
            }
        }
        else if(strcmp(ch,"report")==0){
            printf("%d\n",sum);
        }
    }
    return 0;
}
