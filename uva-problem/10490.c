#include <stdio.h>

int main()
{
    int n,i,flag=0,sum;
    int perfect[9]={'2','3','5','7','13','17','19','31','\0'};
    while(scanf("%d",&n)!=EOF){
            if(n==0)break;
        for(i=0;i<=7;i++){
            if(n==perfect[i]){
                flag=1;
                sum=(pow(2,(n-1)))*(pow(2,n)-1);
            }
        }
        printf("Perfect: %d!\n",sum);
    }
    return 0;
}
