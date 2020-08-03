#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char ch[1000],yes[1000];
    int len,i,hoat,count;
    while(gets(ch)){
        if(ch[0]=='*')break;
        else{
           // strcpy(yes,strupr(ch));
            len=strlen(ch);
            hoat=count=0;
            for(i=0;i<len;i++){
                if(ch[i]==' '){
                    hoat++;
                    if(toupper(ch[0])==toupper(ch[i+1]))count++;
                   else {printf("N\n");break;}
                }
            }
            if(hoat==count)printf("Y\n");
        }
    }

    return 0;
}
