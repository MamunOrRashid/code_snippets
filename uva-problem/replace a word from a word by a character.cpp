#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int i,j;
    char ch[100],ans[100]="";
    scanf("%s",&ch);
    int len=strlen(ch);
    printf("%d\n",len);
    j=0;
    for(i=0;i<len;i++){
        if(len>(i+2) && ch[i]=='B' && ch[i+1]=='O' && ch[i+2]=='J'){  //len>(i+2) &&  na dilao hoi
            ans[j]='X';
            j++;
            i=i+2;
        }
        else{
            ans[j]=ch[i];
            j++;
        }
    }
    printf("%s\n",ans);



    return 0;
}
