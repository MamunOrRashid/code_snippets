#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{

    long long int n,root;
    while(scanf("%lld",&n)!=EOF){
        root=sqrt(n);
        if(n==0)break;
        else if(root*root==n)printf("yes\n");
        else printf("no\n");
    }


    return 0;
}
