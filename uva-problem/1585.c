#include <stdio.h>
#include <string.h>

int main()
{
    char ch[102];
    int T,length,i,j,sum,s;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%s",&ch);
        length=strlen(ch);
        sum=0;
        s=0;
        for(j=0;j<length;j++){

            if(ch[j]=='O')s++;
            else if(ch[j]=='X')s=0;
            sum=sum+s;
        }
        printf("%d\n",sum);

    }
    return 0;
}
