#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int t,arr[20008],i,n;
    long int sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0; i<n; i++)scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(i=n-3; i>=0;i=i-3)
        {
            sum=sum+arr[i];
        }
        printf("%ld\n",sum);
    }

    return 0;
}

