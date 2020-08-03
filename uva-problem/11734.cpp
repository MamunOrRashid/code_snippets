#include <bits/stdc++.h>
#define max 35
using namespace std;

int main()
{
    char ch1[max],ch2[max],temp1[max],temp2[max];
    int p,i,k,s,t,len1,len2,count,j;
    scanf("%d",&t);
    getchar();
    for(p=1;p<=t;p++)
    {
       gets(ch1);
       gets(ch2);
       len1=strlen(ch1);
       len2=strlen(ch2);

        k=0;
         for(int j=0;j<len1;j++)
         {
             if(ch1[j]!=' '){
                temp1[k]=ch1[j];
                k++;
             }
         }
         temp1[k]='\0';

          s=0;
         for(int j=0;j<len2;j++)
         {
             if(ch2[j]!=' '){
                temp2[s]=ch2[j];
                s++;
             }
         }
          temp2[s]='\0';

        count=0;
       if(len1==len2)
       {
           for(i=0;i<len1;i++)
           {
               if(ch1[i]==ch2[i]) count++;
               else break;
           }
           if(count==len1) printf("Case %d: Yes\n",p);
           else printf("Case %d: Wrong Answer\n",p);
       }
       else{
          if(strcmp(temp1,temp2)==0)printf("Case %d: Output Format Error\n",p);
          else printf("Case %d: Wrong Answer\n",p);
       }

    }
    return 0;
}
