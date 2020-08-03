#include <stdio.h>

int main()
{
    int a, b, c,d, i,j, result, res, test_case;
    while((scanf("%d", &test_case))==1)
    {
        for(i=1;i<=test_case; i++)
       {
           scanf("%d %d %d", &a, &b, &c);
           for(j=1, a=a+b, result=0, d=5; d>=1; j++)
            {
                d=(a/c);
                res=(a%c);
                a=d+res;
                result=result+d;
            }
        printf("%d\n", result);
        }
    }
}
