#include <bits/stdc++.h>
using namespace std;
 long long int p,q;

long long pa(long long x){
    return ((x*(x+1))/2);
}
long long sum(long long x){
    if(x<0) return 0;
    if(x<10) return pa(x);
    return (x/10*45) + pa(x%10)+sum(x/10);
}
int main()
{


    while(cin>>p>>q && ( p >= 0)){
        printf("%lld\n",sum(q)-sum(p-1));
    }


    return 0;
}
