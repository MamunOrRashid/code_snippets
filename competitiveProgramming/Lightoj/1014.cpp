#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[1000000];
void initial(ll a,ll b);

int main()
{
    ll tc,a,b,result;
    scanf("%lld",&tc);
    for(ll i=1; i<=tc; i++)
    {
        scanf("%lld%lld",&a,&b);
        printf("Case %lld:",i);
        if((a-b)<=b) printf("impossible\n");
        else initial(a,b);
    }
    return 0;
}
void initial(ll a,ll b)
{
    a=a-b;
    ll boundary=sqrt(a),k=0,count=0;
    for(ll i=1; i<=boundary; i++)
    {
        if(a%i==0)
        {
            ll div=(a/i);
            if(div>b)
            {
                arr[k++]=div;
                count++;
            }
            if(i>b && i != div)
            {
                arr[k++]=i;
                count++;
            }
        }
    }
    sort(arr,arr+k);
    for(ll i=0;i<count;i++){
           printf(" %lld",arr[i]);
    }
    printf("\n");
}




