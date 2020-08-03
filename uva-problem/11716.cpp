#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    char ch[10004];
    int n,len,yes,s;
    scanf("%d",&n);
    getchar();
    while(n--){
        gets(ch);
        len=0;
        for(int i=0;ch[i]!='\0';i++){
            len++;
        }
        yes=sqrt(len);
        if((yes*yes)!=len) printf("INVALID");

        else{
            char check[103][103];
            s=0;
            for(int k=0;k<yes;k++){
                for(int i=0;i<yes;i++){
                    check[k][i]=ch[s];
                    s++;
                }
            }
            for(int p=0;p<yes;p++){
                for(int t=0;t<yes;t++){
                    printf("%c",check[t][p]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
