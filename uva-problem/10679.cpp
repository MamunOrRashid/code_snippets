#include <bits/stdc++.h>
#define max1 100000
#define max2 1000
using namespace std;

int main()
{
    int n1,n2,len1,len2,i,j,count,check;
    char ch1[max1],t[max2];
    scanf("%d",&n1);
    while(n1--)
    {
        scanf("%s",ch1);
        len1=strlen(ch1);
        scanf("%d",&n2);
        for(i=0; i<n2; i++)
        {
            scanf("%s",t);
            len2=strlen(t);
            for(i=0; i<len1;)
            {
                for(j=0; j<len2;)
                {
                    if(t[j]==ch1[i])
                    {
                        i++;
                        j++;
                        count++;
                    }
                }
                if(count==len2)
                {
                    check=1;
                    break;
                }

            }
            if(check==1) printf("y\n");
            else printf("n\n");
        }
    }
    return 0;
}
