#include <stdio.h>
#include <string.h>

int main()
{
    char ch[128];
    int n,i,len,sum,j,k,count;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf(" ");
        gets(ch);
        len=strlen(ch);
        sum=len/2;
        count=0;
        if((sum*2)!=len)printf("No\n");
        else if((sum*2)==len){
            for(j=0,k=n-1;j<len && k>=len;j++,k--){
                if(ch[j]==ch[k]-2){
                    count++;
                    printf("yes\n");
                }
            }
            //if(count==sum)printf("Yes\n");
        }

    }
    return 0;
}
