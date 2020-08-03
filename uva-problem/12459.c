#include <stdio.h>

int main()
{
    long long int p[82],b[82];
    int i,n;

    while(scanf("%d",&n)!=EOF && n!=0){
        for(i=1;i<=80;i++){
            if(i==1){
                p[i]=1;
            }
            else if(i>1){
                b[1]=1;
                b[0]=1               ;
                p[i]=b[i-2]+b[i-1];
                b[i]=p[i];
            }

        }
        printf("%lld\n",p[n]);
    }
    return 0;
}
