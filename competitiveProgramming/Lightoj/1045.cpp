#include <bits/stdc++.h>
using namespace std;
double a[1000010];
#define ll long long int

void f(){
    a[0]=0.0;
    for(int i=1;i<=1000000;i++){
        a[i]=log(i)+a[i-1];
    }
}
int main() {
    int tc,n,b;
    cin>>tc;
    f();
    for(int i=1;i<=tc;i++){
        cin>>n>>b;

        printf("Case %d: %.0lf\n",i,floor(a[n]/log(b))+1);

    }
    return 0;
}


