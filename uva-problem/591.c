#include <stdio.h>

int main()
{
    int n,h[100],sum,count,j=1,k,i,avg;
    while(scanf("%d",&n)==1){
        sum=0;
        if(n==0)break;
        for(i=0;i<n;i++){
            scanf("%d",&h[i]);
            sum=sum+h[i];
        }
        avg=sum/n;

        count=0;
        for(k=0;k<n;k++){
            if(h[k]>avg){
                count=count+(h[k]-avg);


            }
        }
        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n\n",count);
        j++;
    }
    return 0;
}
