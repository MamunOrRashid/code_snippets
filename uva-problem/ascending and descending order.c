#include <stdio.h>

int main()
{
    int i,n,j,a[1000],p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
        }
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}
