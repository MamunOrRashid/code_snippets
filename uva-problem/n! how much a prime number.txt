#include <stdio.h>
#include <math.h>


int main()
{
    int n,i,sum,p,x;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        i=1;
        p=2;
        while(1)
        {
            x=n/(pow(p,i));
            if(x==0){
                printf("%d\n",sum);
                break;
            }
            else
            {
                sum=x+sum;
                i++;
            }
        }

    }
    return 0;
}
