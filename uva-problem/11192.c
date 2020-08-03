#include <stdio.h>
#include <string.h>

int main()
{
    int g,j,k,i,len,sum;
    char ch[100];

    while(scanf("%d",&g)!=EOF){
            if(g==0) break;

            gets(ch);
        len=strlen(ch);
        sum=len/g;
        for(i=sum; i<len; i=i+sum){

            for(j=i; j>=i-sum+1; j--)
            {
                printf("%c",ch[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
