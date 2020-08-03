#include <iostream>
#include <cstdio>
#include <cstdio>
#define max 18409999
using namespace std;

bool prime[max];
long long int result[100005];
void seieve()
{
    long long int i,j,k,c;
    prime[0]=prime[1]=true;
    k=2;
    c=1;
    for(i=2;i<=max;i++){
        while(i<max && prime[i]) i++;
        if(i-k==2) result[c++]=k;
        k=i;
        for(j=i*i;j<=max;j=j+i)prime[j]=true;


    }
}
int main()
{
    int s;
    seieve();
    while(cin>>s){
        printf("(%lld, %lld)\n",result[s],result[s]+2);
    }
    return 0;
}
