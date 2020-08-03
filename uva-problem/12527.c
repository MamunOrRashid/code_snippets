#include <stdio.h>

int main()
{
    int N,M,i,k,j,x,p[500],sum,flag;
    while(scanf("%d%d",&N,&M)!=EOF){

        sum=0;
       for(i=N;i<=M;i++){
          flag=0;
          k=0;
          while(i!=0){
            p[k]=i%10;
            printf("%d",p[k]);
              i=i/10;
             k++;
          }
         /* for(j=0;j<k-1;j++){
            printf("%d\n",p[k]);
          }*/
       }
    }

    return 0;
}
