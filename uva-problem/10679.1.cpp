#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100000],t[1000];
    int n,m,len1,len2,i,j,count;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        len1=strlen(s);
        scanf("%d",&m);
        for(int p=0;p<m;p++)
        {
            scanf("%s",t);
            len2=strlen(t);
            for(i=0;i<len1;i++)
            {
                count=0;
                for(j=0;j<len2;j++)
                {
                    if(t[j]==s[i]){
                        count++;
                        i++;
                    }
                    else break;
                }
                if(len2==count){
                    printf("y\n");
                    break;
                }
                else continue;
            }
            if(len2!=count)printf("n\n");
        }
    }
    return 0;
}
