#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    char ch[1000000];
    long int len,c4,c100,c400,c15,c55,i,leap=0,flag=0,yes=0;
    while(scanf("%s",ch)!=EOF){
        if(yes!=0)printf("\n");
        yes=1;
        len=strlen(ch);
       c4=c100=c400=c15=c55=0;
        for(i=0;i<len;i++){
            c4=(c4*10 +(ch[i]-'0'))%4;
            c100=(c100*10 +(ch[i]-'0'))%100;
            c400=(c400*10 +(ch[i]-'0'))%400;
            c15=(c15*10 +(ch[i]-'0'))%15;
            c55=(c55*10 +(ch[i]-'0'))%55;
        }
        if(c400==0 || (c100!=0 && c4==0)){
            printf("This is leap year.\n");
            leap=1;
            flag=1;

        }
        if(c15==0) printf("This is huluculu festival year.\n");

        if(c55==0 && leap==1){
            printf("This is bulukulu festival year.\n");
        }

        if(flag==0)printf("This is an ordinary year.\n");


    }
    return 0;
}

