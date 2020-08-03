#include <stdio.h>

int main()
{
    int p,q,i,sum;
    while(scanf("%d%d",&p,&q)!=EOF)
    {
        sum=0;
        if(p<0 && q<0)break;
        else
        {
            for(i=p; i<=q; i++)
            {

                if((i%10)>0)sum=sum+(i%10);
                else if(i==0)sum=sum+i;
                else sum=sum+(i/10);
            }
        }
        printf("%d\n",sum);

    }
    return 0;
}
