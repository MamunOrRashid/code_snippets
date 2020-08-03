#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch[5000];
    int end=0,sum;
    while(gets(ch)){
        sum=strlen(ch);
        for(int i=0;i<sum;i++){
            if(ch[i]=='"' && end==0){
                printf("``");
                end=1;
            }
            else if(ch[i]=='"'&& end==1){
                printf("''");
                end=0;
            }
            else printf("%c",ch[i]);
        }
        printf("\n");
    }

    return 0;
}
