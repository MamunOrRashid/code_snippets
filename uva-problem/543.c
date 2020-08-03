#include <stdio.h>
#include <math.h>
int main()
{
    int n,k,p,i,x,y,j,a[100000],fract;
    while(scanf("%d",&n)!=EOF && n>=6 && n!=0){
        k=0;

        for(i=3;i<=n;i++){
            fract=i/2;
            for(j=2;j<=fract+1;j++){
                if(i%2!=0){
                    a[k]=i;
                    k++;
                }
            }
        }
        for(p=0;p<k;p++){
           printf("%d\n",a[p]);
        }
      /*  for(i=0;i<k-1;i++){
           for(j=i+1;j<k;j++){
             if((a[i]+a[j])==n){
                x=a[i];
                y=a[j];
             }
           }*/


        printf("%d=%d+%d\n",n,x,y);
    }
    return 0;
}
