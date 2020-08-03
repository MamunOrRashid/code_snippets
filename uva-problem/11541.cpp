#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[205],p;
    int t,i,len,j,check;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",ch);
        len=strlen(ch);

        printf("Case %d: ",i);
        for(j=0; j<len;)
        {
            if(ch[j]>='A' && ch[j]<='Z')
            {
                p=ch[j];
                j++;
                //fkdlfkdfklf
                /**gkfglfklk*/
            }
            int sum=0;
            while((ch[j]-'0')>=0 && (ch[j]-'0')<=9)
            {
                sum=sum*10+(ch[j]-'0');
                j++;
                if((ch[j]>='A' && ch[j]<='Z') || ch[j]=='\0')
                for(int k=0; k<sum; k++)printf("%c",p);
            }
        }
        printf("\n");
    }
    return 0;
}
