#include <bits/stdc++.h>
using namespace std;
int a[25];

int main()
{
    int n,k=1;
    while(scanf("%d",&n)==1)
    {
        for(int i=0; i<n; i++) scanf("%d",&a[i]);

        long long int large=0,p;
        for(int i=0; i<n; i++)
        {
            p=1;
            for(int j=i; j<n; j++)
            {
                p *=a[j];
                if(large<p)large=p;
            }

        }
        printf("Case #%d: The maximum product is %lld.\n\n",k++,large);
    }


    return 0;
}

