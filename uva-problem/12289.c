#include <stdio.h>

int main()
{
    char ch[100];
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",ch);
        printf("%d\n",i);
    }
    return 0;
}
