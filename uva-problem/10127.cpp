#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    int yes,count;
    while(scanf("%lld",&n)==1){
            yes=0;
            count=0;
        do{
            yes=(10*yes+1)%n;
            count++;
        }while(yes);
        printf("%d\n",count);
    }
    return 0;
}
