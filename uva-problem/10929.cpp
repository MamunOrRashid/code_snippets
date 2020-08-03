#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char ch[1004];
    int len,sum,i;
    while(cin>>ch){
        if(strcmp(ch,"0")==0) break;
        else{
            len=strlen(ch);
            sum=ch[0]-'0';
            for(i=1;i<len;i++){
                sum=sum*10+(ch[i]-'0');

                sum=sum%11;

            }
            if(sum==0) printf("%s is a multiple of 11.\n",ch);
            else printf("%s is not a multiple of 11.\n",ch);
        }
    }
    return 0;
}
