#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,check,y1=0,y2=0,rev;
    while(1)
    {
        scanf("%d",&n);
        check=n;
        if(n==0) printf("0\n");
        if(n==1 || n==2 || n==3 || n==5 || n==7)
        {
            printf("%d\n",n*2);
            break;
        }
        else
        {
            rev=0;
            while(n!=0)
            {
                rev=rev*10+n%10;
                n=n/10;
            }
            if(rev!=check) printf("%d\n",check*2);
            else
            {
                for(i=2; i<=(int)sqrt(check); i++)
                {
                    if(check%i==0)
                    {
                        y1=1;
                        break;
                    }
                }
                if(y1==1) printf("%d\n",check*2);
                else if(y1!=1) y2=1;
            }
            if(y2==1)
            {
                printf("%d\n",check*2);
                break;
            }
        }
    }
    return 0;
}
