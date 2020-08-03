#include <stdio.h>
#include <string.h>

int main()
{
    char ch[5000];
    int i,p,k,len,count;
    while(gets(ch)){
        len=strlen(ch);
        p=0;
        count=0;
        for(i=0;i<=len;i++){
            if(ch[i]==' ' || ch[i]=='\0'){
                count++;
                if(count==1){
                    for(k=i-1;k>=p;k--){
                        printf("%c",ch[k]);
                    }
                }
                else
                    for(k=i;k>=p;k--){
                        printf("%c",ch[k]);
                    }
                p=i;
            }
        }
        printf("\n");
    }
    return 0;

}
