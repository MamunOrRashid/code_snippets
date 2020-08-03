#include<stdio.h>
int main()
{
    int i,j,n1,n2,sum;
    j=1;
    while(scanf("%d%d",&n1,&n2)){
        sum=0;
        for(i=n1;i<=n2;i++)
        {
            if(i%2==1)
            {
                sum=sum+i;

            }
        }
        printf("case %d: %d\n",j,sum);
        j++;
    }
    return 0;
}

