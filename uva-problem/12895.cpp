#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int t,n,p[100],yes;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        yes=n;
        int i=0,count=0;
        while(n!=0){
            p[i]=n%10;
            n=n/10;
            count++;
            i++;
        }
        int sum=0;
        for(int j=0;j<count;j++)
            sum=sum+pow(p[j],count);
        if(sum==yes) printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }
    return 0;
}

