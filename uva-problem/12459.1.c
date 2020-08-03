#include <stdio.h>

int main()
{
    long long int yes[85];
    int n,i;
    yes[1]=1;
    yes[2]=2;
    for(i=3;i<=85;i++){
        yes[i]=yes[i-1]+yes[i-2];
    }
    while(scanf("%lld",&n)!=EOF && n!=0){
        printf("%lld\n",yes[n]);
    }
    return 0;
}
