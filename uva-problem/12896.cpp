#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int t,len,ch[105],num[105],i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&len);
        for(i=0;i<len;i++)scanf("%d",&ch[i]);
        for(i=0;i<len;i++)scanf("%d",&num[i]);
        for(i=0;i<len;i++){
            if(ch[i]==0 && num[i]==1)printf(" ");
            if(ch[i]==1){
                if(num[i]==1)printf(".");
                else if(num[i]==2)printf(",");
                else if(num[i]==3)printf("?");
                else if(num[i]==4)printf("\"");
            }
            else if(ch[i]==2){
                if(num[i]==1)printf("a");
                else if(num[i]==2)printf("b");
                else if(num[i]==3)printf("c");
            }
            else if(ch[i]==3){
                if(num[i]==1)printf("d");
                else if(num[i]==2)printf("e");
                else if(num[i]==3)printf("f");
            }
            else if(ch[i]==4){
                if(num[i]==1)printf("g");
                else if(num[i]==2)printf("h");
                else if(num[i]==3)printf("i");
            }
            else if(ch[i]==5){
                if(num[i]==1)printf("j");
                else if(num[i]==2)printf("k");
                else if(num[i]==3)printf("l");
            }
            else if(ch[i]==6){
                if(num[i]==1)printf("m");
                else if(num[i]==2)printf("n");
                else if(num[i]==3)printf("o");
            }
            else if(ch[i]==7){
                if(num[i]==1)printf("p");
                else if(num[i]==2)printf("q");
                else if(num[i]==3)printf("r");
                else if(num[i]==4)printf("s");
            }
            else if(ch[i]==8){
                if(num[i]==1)printf("t");
                else if(num[i]==2)printf("u");
                else if(num[i]==3)printf("v");
            }
            else if(ch[i]==9){
                if(num[i]==1)printf("w");
                else if(num[i]==2)printf("x");
                else if(num[i]==3)printf("y");
                else if(num[i]==4)printf("z");
            }
        }
        printf("\n");

    }
    return 0;
}

