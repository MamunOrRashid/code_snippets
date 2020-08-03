#include <stdio.h>

int main()
{
    int N,i,j,a[1004],count,p,m;
    while(scanf("%d",&N)!=EOF)
    {
        count=0;

        for(i=0; i<N; i++)
        {
            scanf("%d",&a[i]);
            count++;
        }
        m=0;
        for(j=1;j<N;j++){
            for(i=count-1; i>=1; i--)
            {
                if(a[i]<a[i-1])
                {
                    p=a[i];
                    a[i]=a[i-1];
                    a[i-1]=p;
                    a[i-1]=p;
                    m++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",m);
    }
    return 0;
}
