#include <stdio.h>
#include <string.h>

int main()
{
    int n=(10^100);
    int ch[n];
    while(scanf("%d",ch)!=EOF){
        if(ch%17==0)printf("1\n");
        else printf("0\n");
    }
    return 0;
}
