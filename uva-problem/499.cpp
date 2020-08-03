#include <bits/stdc++.h>
#define yes 50000
using namespace std;

int main()
{
    char first[yes],glo[yes],glo_upr[yes];
    int i,j,len,count[yes],count_upr[yes],p;

    for(p=0; p<26; p++) glo[p]=p+'a';

    for(p=0; p<26; p++) glo_upr[p]=p+'A';

    while(gets(first))
    {
        int max=0,max_upr=0;
        len=strlen(first);
        for(i=0; i<26; i++)
        {
            count[i]=0;
            count_upr[i]=0;
            for(j=0; j<len; j++)
            {
                if(glo[i]==first[j])count[i]++;
                if(glo_upr[i]==first[j]) count_upr[i]++;

            }

            if(max<count[i])max=count[i];
            if(max_upr<count_upr[i]) max_upr=count_upr[i];
        }

        if(max<max_upr) swap(max,max_upr);


        for(i=0; i<26; i++){
            if(max==count_upr[i]){
                printf("%c",glo_upr[i]);
            }
        }
         for(i=0; i<26; i++){
            if(max==count[i]){
                printf("%c",glo[i]);
            }
        }
        printf(" %d\n",max);

   }

    return 0;
}
