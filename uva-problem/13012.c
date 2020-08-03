#include <stdio.h>

int main()
{
    unsigned int i,T,a[6],count;
    while(scanf("%u",&T)!=EOF){
        for(i=0;i<5;i++){
            scanf("%u",&a[i]);
        }
        count=0;
        for(i=0;i<5;i++){
            if(T==a[i])count++;
        }
        printf("%u\n",count);
    }
    return 0;
}
