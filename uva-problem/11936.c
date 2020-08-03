#include <stdio.h>

int main()
{
    int N,i,a,b,c;
    scanf("%d",&N);
    for(i=2;i<=N+1;i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)>c && (b+c)>a && (c+a)>b){
            printf("OK\n");
        }
        else{
            printf("Wrong!!\n");
        }
    }
    return 0;
}
