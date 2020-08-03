#include <stdio.h>
#include <string.h>

int main()
{
    int n,flag;
    char ch[10],ch1[10]="too low",m[10]="might on";
    while(scanf("%d",&n)!=EOF){
        while((gets(ch))!=EOF){

            if(n==0)break;
            else if(n>=1 && n<=5 && ch==ch1);
            else if(n>=6 && n<=10 && ch==m);
            else if(n>=1 && n<=10 && ch=="might on"){
                if(flag==1) printf("Stan is dishonest\n");
                else printf("Stan may be honest\n");
                flag=0;
            }
            else flag=1;
        }
    }
    return 0;
}
