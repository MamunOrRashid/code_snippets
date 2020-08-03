#include <stdio.h>

int main()
{
    int x,z,count,m,sum,sum1;
    char sign,k;
    count=0;
    while(1){
        scanf("%d%c%d%c%d",&x,&sign,&z,&k,&m);
        if(sign=='-'){
            sum=x-z;
            if(sum==m)count++;
        }
        else if(sign=='+'){
            sum1=x+z;
            if(sum1==m)count++;
        }

    }

     printf("%d\n",count);

    return 0;
}
