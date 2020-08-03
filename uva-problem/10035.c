#include <stdio.h>

int main()
{
    unsigned long int a,b,count,flag,sum;
    while(scanf("%lu%lu",&a,&b)!=EOF)
    {

        if(a==0 && b==0)break;
        count=0;
        flag=0;
        while(a!=0 || b!=0)
        {
            sum=a%10+b%10+flag;
            a=a/10;
            b=b/10;
            if(sum>9)
            {
                flag=1;
                count++;
            }
            else if(sum<=9) flag=0;
        }
        if(count==0)printf("No carry operation.\n");

        else if(count==1)printf("%lu carry operation.\n",count);
        else if(count>1)printf("%lu carry operations.\n",count);
    }
    return 0;
}

