#include <bits/stdc++.h>
using namespace std;
int a[5010];

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);

        long long int sum=a[0]+a[1],temp=0,last=0,k;
        k=sum;
        for(int i=2;i<n;i++){
            temp=sum+a[i];
            last=last+temp;
            sum=temp;

        }
        last=last+k;
        printf("%lld\n",last);
    }


    return 0;
}


