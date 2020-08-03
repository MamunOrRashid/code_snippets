#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc,n,hexa,count,yes,i,k;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&n);
        hexa=n;
        count=0;
        while(n!=0)
        {
            if(n%2==1)count++;
            n=n/2;
        }
        yes=0;
        while(hexa!=0)
        {
            k=hexa%10;
            hexa=hexa/10;
            while(k!=0)
            {
                if(k%2==1)yes++;
                k=k/2;
            }
        }
        printf("%d %d\n",count,yes);
    }
    return 0;
}
