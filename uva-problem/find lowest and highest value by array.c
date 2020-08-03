#include <stdio.h>

int main()
{
    int large,a[1000],small,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    small=a[0];
    large=a[0];

    for(i=0;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
        else if(a[i]<small){
            small=a[i];
        }
    }
    printf("%d %d\n",small,large);
    return 0;
}
