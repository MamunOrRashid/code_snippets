#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long int s,d,n,i;
    while(scanf("%ld%ld",&s,&d)==2){
        n=0;
        for(i=s;;i++){
            n=n+i;
            if(n>d||n==d){
                printf("%ld\n",i);
                break;
            }
        }
    }

    return 0;
}
