#include <stdio.h>

int main()
{
    int a,b,j,i,count,k,k1,k2;


    while(scanf("%d%d",&a,&b)==2){
        if(a<0 && b<0)break;
        else if((a>=0 && a<=99)&&(b>=0&& b<=99))
        {
            count=0;

            if(b<50 && a<b)
            {
                for(j=a; j<b; j++)
                {
                    count++;
                }
                printf("%d\n",count);
            }

            else if(b>50 && a<b)
            {
                k1=0;
                k2=0;
                for(k=b; k<99; k++)
                {
                    k1++;
                }
                for(k=0; k<=a; k++)
                {
                    k2++;
                }
                printf("%d\n",(k1+k2));
            }

            if(a<50 && b<a)
            {

                printf("%d\n",(a-b));
            }

            else if(a>50 && b<a)
            {
                k1=0;
                k2=0;
                for(k=a; k<99; k++)
                {
                    k1++;
                }
                for(k=0; k<=b; k++)
                {
                    k2++;
                }
                printf("%d\n",(k1+k2));
            }
        }
    }
    return 0;
}
