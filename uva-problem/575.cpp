#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{

    char ch[1000];
    int i,len,k;
    int sum;
    while(gets(ch)){
        if((ch[0]-'0')==0)break;
        else{
            len=strlen(ch);
            k=len;
            sum=0;
            for(i=0,k=k-1;i<len;i++,k--){
                sum=sum+(ch[k]-'0')*(pow(2,i+1)-1);
            }
        }
        printf("%d\n",sum);

    }
    return 0;

}
