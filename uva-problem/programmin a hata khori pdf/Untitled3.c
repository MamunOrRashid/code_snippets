#include <stdio.h>

int main()
{
    int n,i;
    char ch[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %c",&ch[i]);
    }
     for(i=0;i<n;i++){
        printf("%c",ch[i]);
    }
    return 0;
}
