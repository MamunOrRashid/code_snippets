#include <iostream>
#include <cstdio>
#include <cstring>
#define m 10

using namespace std;
bool prime [m];
int pc=0,tw=1;
long long int twins[100001];
void seieve()
{
    long long int i,j,k,l;
    prime[0]=prime[1]=true;
    k=2;
    for(i=2;i<=m;i++){
        while(i<=m && prime[i]){
            i++;
            //printf("while i=%lld ",i);
        }
        if(i-k ==2){
            //printf("if k=%lld\n",k);
            twins[tw++]=k;
           // printf("twins=%lld,k=%lld,i=%lld\n",twins[tw++],k,i);
        }
        k=i;
        for(j=i*i;j<=m;j+=i)prime[j]=true;
    }
}

int main()
{

    int a;
    seieve();
    /**while(cin>>a){

        printf("(%lld,%lld)\n",twins[a],twins[a]+2);
    }*/
    return 0;
}
