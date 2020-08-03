#include <stdio.h>
int a[1000000];
void show()
{
    int i,j;
    a[0]=1;
    a[1]=1;
    for(i=2;i<=1000000;i++)a[i]=0;
    for(i=2;i<=1000000;i++){
        for(j=2;i*j<=1000000;j++)
        {
            a[i*j]=1;
        }
    }
}
int main()
{
    show();
    int n,count,k;
    while(scanf("%d",&n)!=EOF && n)
    {
        count=0;
        for(k=2;k<=n;k++)
        {
            if(a[k]==0)
            {
                if(n%k==0)count++;
            }
        }
        printf("%d : %d\n",n,count);
    }

    return 0;
}
