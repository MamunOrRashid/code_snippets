#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[105],yes,p,i;
    scanf("%d",&t);
    while(t--){
        int count=0;
        scanf("%d",&n);
        scanf("%d",&p);
        for(i=0;i<p;i++)scanf("%d",&arr[i]);
        for(i=1;i<=n;i++){
            if(i%7==6 || i%7==0)continue;
            yes=0;
            for(int k=0;k<p;k++){
                if(i%arr[k]==0)yes=1;
            }
            if(yes)++count;
        }
        printf("%d\n",count);
    }
    return 0;
}
