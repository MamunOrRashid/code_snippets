#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n,i,yes,p,count=0;

    scanf("%d",&p);
    if(p>=100){
        for(n=2; n<=p; n++)
        {
            if(n==2|| n==3) printf("%d is prime\n",n);
            else
            {
                yes=0;
                for(i=2; i<=sqrt(n); i++)
                {

                    if(n%i==0)
                    {
                        yes=1;
                        continue;
                    }
                }
                if(yes==0)printf("%d is prime\n",n);
            }


        }
    }
    return 0;
}
