#include <bits/stdc++.h>
using namespace std;


int main()
{
   int tc,n,temp,diff,arr[100000],ans;
   scanf("%d",&tc);
   for(int t=1;t<=tc;t++){
     scanf("%d",&n);
     arr[0]=0;
     for(int i=1;i<=n;i++)scanf("%d",&arr[i]);

     diff=arr[1]-arr[0];
     for(int i=1;i<=n;i++){
        temp=arr[i]-arr[i-1];

        if(temp>diff)diff=temp;
     }
     //printf("%d\n",diff);
     ans=diff;
     for(int i=1;i<=n;i++){
        temp=arr[i]-arr[i-1];
        if(temp==diff) diff--;
        else if(temp>diff){
            ans++;
            break;
        }
     }
     printf("Case %d: %d\n",t,ans);
   }


    return 0;
}
