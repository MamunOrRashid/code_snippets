#include <bits/stdc++.h>
using namespace std;
#define max 1000000
bool a[max];

void yes(){
    int sum,n,m;
    for(n=1;n<=max;n++){
        sum=n;
        m=n;
        while(m>0){
            sum=sum+ m%10;
            m=m/10;
        }
        a[sum]=true;
    }
    for(n=1;n<=max;n++){
        if(!a[n])printf("%d\n",n);
    }
}
int main()
{
    yes();

    return 0;

}
