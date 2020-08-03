#include <stdio.h>

int main()
{
    long long int A,L,j=1,i,A_1;
    while(scanf("%lld%lld",&A,&L)==2 && A<L)
    {
        A_1=A;
        if(A<0 && L<0)break;
        else
        {
            for(i=1;; i++)
            {
                if(A==1)break;
                else if(A%2==0)
                {
                    A=A/2;
                }
                else
                {
                    A=(A*3)+1;
                }
                if(A>L)break;
            }
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,A_1,L,i);
        }
        j++;
    }
    return 0;
}
