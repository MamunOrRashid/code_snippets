#include <stdio.h>

int main()
{
    unsigned long int a,b,c,d,n,i;
    scanf("%lu",&n);
    for(i=0;i<n;i++){
        scanf("%lu%lu%lu%lu",&a,&b,&c,&d);
        if((a==b && b==c && c==d))printf("square\n");
        else if((a==b && c==d)||(b==c && a==d) || (a==c && b==d))printf("rectangle\n");
        else if((a+b+c)<=d || (b+c+d)<=a || (c+d+a)<=b ||(a+b+d)<=c)printf("banana\n");
        else printf("quadrangle\n");
    }
    return 0;
}
