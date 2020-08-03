#include <stdio.h>
using namespace std;
int main()
{
    int A,F,k,j,i,t,n;
    scanf("%d",&n);

    while(n--){
        scanf("%d\n%d",&A,&F);
        for(i=1; i<=F; i++)
        {
            for(j=1; j<=A; j++)
            {
                for(k=1; k<=j; k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            for(j=A-1; j>=1; j--)
            {
                for(k=1; k<=j; k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            if(i!=F-1)printf("\n");
        }
        if(n)printf("\n");

    }
    return 0;
}
