#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,i,j,sum,count;
    for(i=1;i<=201;i++){
        scanf("%d%d",&a,&b);
        count=0;
        if(a==0 && b==0) break;
        else{
            for(j=a;j<=b;j++){
                sum=sqrt(j);
                if((sum*sum)==j){
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
