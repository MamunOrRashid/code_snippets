#include <stdio.h>

int main()
{
    int N,i,j,a[102],count,point,flag;
    scanf("%d",&N);

    printf("Lumberjacks:\n");
    for(i=0;i<N;i++){
        count=0;
        point=0;
        flag=0;
        for(j=0;j<10;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<=8;j++){
            if(a[j]>a[j+1])count++;
            else if(a[j]<a[j+1])point++;

        }
        if(count==9 || point==9)printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
