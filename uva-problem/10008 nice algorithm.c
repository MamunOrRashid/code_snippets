#include <stdio.h>
#include <string.h>
//#include <ctype.h>

int main ()
{
    char line[500],x;

    int kase,i,len,j,let[26]={0},k,m,max;
    while(scanf("%d",&kase)!=EOF){
        for(i=0;i<=kase;i++){
            gets(line);
            len=strlen(line);
            for(j=0;j<len;j++){
                x=toupper(line[j]);
                if(x>='A' && x<='Z'){
                    let[x-65]++;
                }
            }
        }
        max=0;
        for(k=0;k<26;k++){
            if(let[k]>max){
                max=let[k];
            }
        }
        for(;;){
            for(m=0;m<26;m++){
                if(let[m]==max){
                    printf("%c %d\n",m+65,max);
                }
            }
            max--;
            if(max==0)break;
        }
    }
    return 0;
}
