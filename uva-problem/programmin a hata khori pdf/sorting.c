#include <stdio.h>

int main()
{
    int n,a[2000],m,i,j,small,large,sum[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(j=1;j<n-1;j++){
      if(a[j]<small){
        small=a[j];

      }
      printf("%d ",small);
    }
    return 0;
}
