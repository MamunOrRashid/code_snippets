#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n!=0){
        if(n<=100) printf("f91(%d) = %d\n",n,n);
        else if(n>=101) printf("f91(%d) = %d\n",n,n-10);
    }

    return 0;
}
