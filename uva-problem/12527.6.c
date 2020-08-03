#include <stdio.h>

int main()
{
    int n,m,i,j,x[5005],k,l,flag,count,t;
    while(scanf("%d%d",&n,&m)!=EOF){
        count=0;
        for(i=n;i<=m;i++){
            j=0;
            t=i;

            while(t!=0){
                x[j]=t%10;
                t=t/10;
                j++;
            }
             flag=0;
            for(k=0;k<j-1;k++){
                for(l=k+1;l<j;l++){
                    if(x[k]==x[l]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1)break;
            }
            if(flag==0)count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
