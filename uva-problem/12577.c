#include <stdio.h>

int main()
{
    char ch[200];
    char m[200]="Hajj";
    char n[200]="Umrah";
    int t=1,len,i,flag=1;

    while(scanf("%s",ch)!=EOF && ch!='*'){
        len=strlen(ch);


         if(len==4){
           for(i=0;i<len;i++){
                if(ch[i]!=m[i]){
                    flag=0;
                }
           }
           if(flag==1)printf("Case %d: Hajj-e-Akbar\n",t);
        }

        else if(len==5){
           for(i=0;i<len;i++){
                if(ch[i]!=n[i]){
                    flag=0;
                }
           }
           if(flag==1)printf("Case %d: Hajj-e-Asghar\n",t);
        }
        t++;

    }
    return 0;
}
