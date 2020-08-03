#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j,len,k;
    char ch[80];
    char p[10]= {'0','1','2','3','4','5','6','7','8','9'};
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++){
            if(i>t)break;
            k=0;
        while(gets(ch)!='\0'&& k<=100){
            len=strlen(ch);
            for(j=0; j<len; j++)
            {
                if(ch[j]==p[0])ch[j]='O';
                else if(ch[j]==p[1])ch[j]='I';
                else if(ch[j]==p[2])ch[j]='Z';
                else if(ch[j]==p[3])ch[j]='E';
                else if(ch[j]==p[4])ch[j]='A';
                else if(ch[j]==p[5])ch[j]='S';
                else if(ch[j]==p[6])ch[j]='G';
                else if(ch[j]==p[7])ch[j]='T';
                else if(ch[j]==p[8])ch[j]='B';
                else if(ch[j]==p[9])ch[j]='P';
                k++;
            }

            puts(ch);
        }

       if(i<t){
            printf("\n");
       }

    }
    return 0;
}
