#include <bits/stdc++.h>
#define max 2000004
using namespace std;

int arr[max],i,n;

int main()
{
    while(scanf("%d",&n) && n!=0){
        for(i=0;i<n;i++)scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(i=0;i<n;i++){
            printf("%d",arr[i]);
            if(i<n-1)printf(" ");
        }
        printf("\n");
    }


    return 0;
}
