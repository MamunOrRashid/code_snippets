#include <iostream>
#include <cstdio>

int main()
{
    int a,b,c,d,sum;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF){
        sum=1080;
        if(a==0 && b==0 && c==0 && d==0) break;
        if(a==b && b==c && c==d)sum=sum;
        if(a>b) sum=sum+(a-b)*9;
        if(b>c) sum=sum+((40-b)+c)*9;
        if(c>d) sum=sum+(c-d)*9;
        if(a<b) sum=sum+(a+(40-b))*9;
        if(c<d) sum=sum+(c+(40-d))*9;
        if(b<c) sum=sum+(c-b)*9;
        printf("%d\n",sum);

    }


    return 0;
}
