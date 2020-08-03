#include <stdio.h>

int main()
{
    int a,b,i,j,p[300],q[300];
    while(scanf("%d%d",&a,&b)!=EOF){
            i=1;
            j=1;
        while(a!=0){
            q[i]=a%2;
            a=a/2;
            i++;
        }
        while(b!=0){
            p[j]=b%2;
            b=b/2;
            j++;
        }
        for(i=i-1;i>=1;i--){printf("%d ",q[i]);}
        printf("\n\n");
        for(j=j-1;j>=1;j--){printf("%d ",p[j]);}
    }
    while(a!=0 && b!=0){

    }
    return 0;
}
