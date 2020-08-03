#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,sum;
    while(scanf("%d%d%d",&a,&b,&c)==3){
        if((a<=0 || b<=0 || c<=0))break;

        if(sqrt((a*a)+(b*b))==c) printf("right\n");
        else if(sqrt((a*a)+(c*c))==b) printf("right\n");
        else if(sqrt((c*c)+(b*b))==a) printf("right\n");
        else printf("wrong\n");


    }
    return 0;
}

