#include <stdio.h>

int main()
{
     int T,i,n,p,q,j,a[30],k,l,sum,count;
     scanf("%d",&T);
     for(i=1;i<=T;i++){
        scanf("%d%d%d",&n,&p,&q);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }

        sum=0;
        count=0;
        if(p<=n){
            for(k=0;k<p;k++){
                sum=sum+a[k];
               if(sum<=q) count++;
            }

        }
        else if(p>n){
            for(l=0;l<n;l++){
                sum=sum+a[l];
                if(sum<=q) count++;
            }

        }
        printf("Case %d: %d\n",i,count);
     }
     return 0;
}

