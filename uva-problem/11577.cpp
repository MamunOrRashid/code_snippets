/**int main()
{
    char str[1000];
    char tst[1000];
    int i, test,len,j,t,max,count[1000];

    for(i=0; i<26; i++)
    {
        tst[i]=i+'a';
    }

    scanf("%d",&test);
    getchar();
    for(t=0; t<test; t++)
    {
        max=0;

        gets(str);
        len=strlen(str);
        for(i=0; i<26; i++)
        {
            count[i]=0;
            for(j=0; j<len; j++)
            {
                if(str[j]>='A'&&str[j]<='Z')
                {
                    str[j]=str[j]-'A'+'a';
                   // printf("j=%d %c\n",j,str[j]);
                }
                if(tst[i]==str[j])
                {
                    count[i]++;
                }
            }
            if(max<count[i])
            {
                max=count[i];
            }
        }

        for(i=0; i<26; i++)
        {
            if(count[i]==max)
            {
                printf("%c",tst[i]);
            }
        }
        printf("\n");
    }

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char first[300],glo[300];
    int tc,n,i,j,len,count[300],p;
    for(p=0; p<26; p++)
    {
        glo[p]=p+'a';
    }
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        int max=0;
        gets(first);
        len=strlen(first);
        for(i=0; i<26; i++)
        {
            count[i]=0;
            for(j=0; j<len; j++)
            {
                if(first[j]>='A' && first[j]<='Z')
                {
                    first[j]=first[j]-'A'+'a';
                }
                if(glo[i]==first[j])count[i]++;
            }
            if(max<count[i])max=count[i];
        }
        for(i=0; i<26; i++)
        {
            if(max==count[i])printf("%c",glo[i]);
        }
        printf("\n");
    }

    return 0;
}
