#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n,len,i,k,check,zero;
    char ch[110],yes[110];
    while(scanf("%d%s",&n,ch)==2){
        check=0;
        zero=0;
        if(n==0 && strcmp(ch,"0")==0)break;
        else{

            len=strlen(ch);
            for(i=0,k=0;i<len;i++){
                if((ch[i]-'0')!=n){
                    check=1;
                    yes[k]=ch[i];
                    if((ch[i]-'0')==0)zero++;
                    k++;
                }
            }
            yes[k]='\0';
        }

        if(check!=1 || (k==zero))printf("0\n");
        else printf("%s\n",yes);
    }

    return 0;
}
