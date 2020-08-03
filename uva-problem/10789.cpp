#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[2010],small[2010],large[2010],digit[2010];
    int tc,i,j,len,s_count[2010],l_count[2010],d_count[2010];
    for(int i=0; i<26; i++) small[i]=i+'a';

    for(int i=0; i<26; i++) large[i]=i+'A';
    for(int i=0; i<=9; i++) digit[i]=i+'0';

    int h,check_1,check_2,check_3,value;
    int ch_1,ch_2,ch_3;
    scanf("%d",&tc);
    getchar();
    for(h=1; h<=tc; h++)
    {

        scanf("%s",ch);
        len=strlen(ch);

        for(i=0; i<26; i++)
        {
            s_count[i]=0;
            l_count[i]=0;
            for(j=0; j<len; j++)
            {
                if(small[i]==ch[j])
                {
                    s_count[i]++;
                    //   v=i;
                }

                if(large[i]==ch[j])
                {
                    l_count[i]++;
                    // w=i;
                }
            }
        }

        /**for(i=0;i<26;i++)
        {
            if(s_count[i]!=0)printf("%d ",s_count[i]);
        }
        printf("\n");
        for(i=0;i<26;i++)
        {
            if(l_count[i]!=0)printf("%d ",l_count[i]);
        }*/

        for(i=0; i<=9; i++)
        {
            d_count[i]=0;
            for(j=0; j<len; j++)
            {
                if(digit[i]==ch[j])
                {
                    d_count[i]++;
                }
            }
        }
        printf("Case %d: ",h);
        check_1=0;
        check_2=0;
        check_3=0;

        ch_1=0;
        for(i=0; i<=9; i++)
        {
            if(d_count[i]>=2)
            {
                value=sqrt(d_count[i]);
                for(j=2; j<=value; j++)
                {
                    if(d_count[i]%j==0)
                    {
                        check_1=1;
                        break;
                    }
                }
                if(check_1==0)printf("%c",digit[i]);
            }
            else ch_1++;
        }

        ch_2=0;
       for(i=0; i<26; i++)
        {
            if(l_count[i]>=2)
            {
                value=sqrt(l_count[i]);
                for(j=2; j<=value; j++)
                {
                    if(l_count[i]%j==0)
                    {
                        check_2=1;
                        break;
                    }
                }
                if(check_2==0)printf("%c",large[i]);
            }
            else ch_2++;
        }

        ch_3=0;
        for(i=0; i<26; i++)
        {
            if(s_count[i]>=2)
            {
                value=sqrt(s_count[i]);
                for(j=2; j<=value; j++)
                {
                    if(s_count[i]%j==0)
                    {
                        check_3=1;
                        break;
                    }
                }
                if(check_3==0)printf("%c",small[i]);
            }
            else ch_3++;

        }
        if((check_3==1 || ch_3==len) && (check_2==1 || ch_2==len) && (check_1==1 || ch_1==len)) printf("empty");
        printf("\n");
    }

    return 0;
}
