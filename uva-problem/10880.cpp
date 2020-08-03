#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[100000];
void initial(ll a,ll b);

int main()
{
    ll tc,a,b,result;
    scanf("%lld",&tc);
    for(ll i=1;i<=tc;i++){
        scanf("%lld%lld",&a,&b);
        printf("Case #%lld:",i);
        if(a==b) printf(" 0\n");
        else initial(a,b);
    }
    return 0;
}
void initial(ll a,ll b){
    a=a-b;
    ll boundary=sqrt(a),k=0;
    for(ll i=1;i<=boundary;i++){
        if(a%i==0){
            arr[k++]=i;
            if(i != (a/i)) arr[k++]=a/i;
        }
    }
    sort(arr,arr+k);
    for(ll i=0;i<k;i++){
        if(arr[i]>b)
           printf(" %lld",arr[i]);
    }
    printf("\n");
}
