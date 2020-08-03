#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[110];
    int n,len,p,x,i,j,glen;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        scanf("%s",ch);
        len=strlen(ch);
        x=0;
        glen=len/n;
        p=glen;
        for(i=0; i<len;)
        {
            for(j=glen-1; j>=x; j--)
            {
                printf("%c",ch[j]);
                i++;
            }
            x=glen;
            glen=glen+p;
        }
        printf("\n");
    }
    return 0;
}
