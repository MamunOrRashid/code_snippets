#include <stdio.h>

int main()
{
    unsigned long int B,S,i;
    for(i=1;i<=1000;i++){
        scanf("%lu%lu",&B,&S);
        if(B==0 && S==0) break;
        else if((B-1)==0)printf("Case %lu: :-\\n",i);
        else if((B==S) || B<S)printf("Case %lu: :-|\n",i);
        else if(B>S)printf("Case %lu: : :-(\n",i);
    }
    return 0;
}
