#include <stdio.h>

int main()
{
    unsigned long long int t;
    long int n,sum;
    char ch;
    while(scanf("%llu %c%ld",&t,&ch,&n)!=EOF){
        if(n>0 && t>0)
            if(ch=='/') printf("%ld\n",t/n);

            else if(ch=='%') printf("%ld\n",t%n);
    }
    return 0;
}
